/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchotel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 05:54:59 by jchotel           #+#    #+#             */
/*   Updated: 2020/03/12 08:01:05 by jchotel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::nbits = 8;

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	_pf = 0;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed::Fixed(const Fixed &f)
{
	std::cout << "Copy constructor called" << std::endl;
 	*this = f;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
 	_pf = value << nbits;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
 	_pf = roundf(value * (1 << nbits)) ;
}



Fixed &Fixed::operator=(const Fixed& f) 
{
	std::cout << "Assignation operator called" << std::endl;
    this->_pf = f.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_pf);
}

void Fixed::setRawBits(int const raw)
{
	_pf = raw;
}

int Fixed::toInt(void) const
{
 	return (_pf >> nbits);
}

float Fixed::toFloat(void) const
{
 	return ((float)(_pf) / (1 << nbits));
}

std::ostream &operator<<(std::ostream &out, Fixed const &val)
{
    out << val.toFloat();
    return (out);
}


