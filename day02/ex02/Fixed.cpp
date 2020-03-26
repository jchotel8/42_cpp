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

//CONSTRUCTORS
Fixed::Fixed(void)
{
	_pf = 0;
}

Fixed::~Fixed(void)
{
    return ;
}

Fixed::Fixed(const Fixed &f)
{
 	*this = f;
}

Fixed::Fixed(const int value)
{
 	_pf = value << nbits;
}

Fixed::Fixed(const float value)
{
 	_pf = roundf(value * (1 << nbits)) ;
}


//OPERATORS
Fixed &Fixed::operator=(const Fixed& f) 
{
    this->_pf = f.getRawBits();
    return *this;
}

bool Fixed::operator<(const Fixed& f) const
{
    return (this->_pf < f._pf);
}

bool Fixed::operator>(const Fixed& f) const
{
    return (this->_pf > f._pf);
}

bool Fixed::operator<=(const Fixed& f) const
{
    return (this->_pf <= f._pf);
}

bool Fixed::operator>=(const Fixed& f) const
{
    return (this->_pf >= f._pf);
}

bool Fixed::operator==(const Fixed& f) const
{
    return (this->_pf == f._pf);
}

bool Fixed::operator!=(const Fixed& f) const
{
    return (this->_pf == f._pf);
}

Fixed Fixed::operator+(const Fixed& f) const
{
    return(Fixed(this->toFloat() + f.toFloat()));
}

Fixed Fixed::operator-(const Fixed& f) const
{
    return(Fixed(this->toFloat() - f.toFloat()));
}

Fixed Fixed::operator*(const Fixed& f) const
{
    return(Fixed(this->toFloat() * f.toFloat()));
}

Fixed Fixed::operator/(const Fixed& f) const
{
	if (f.getRawBits() != 0)
    	return(Fixed(this->toFloat() / f.toFloat()));
    return(Fixed(0));
}

Fixed &Fixed::operator++(void) 
{
    this->_pf += 1;
    return *this;
}

Fixed &Fixed::operator--(void) 
{
    this->_pf -= 1;
    return *this;
}

Fixed Fixed::operator++(int) 
{
	Fixed tmp(*this);
    this->_pf += 1;
    return tmp;
}

Fixed Fixed::operator--(int) 
{
	Fixed tmp(*this);
    this->_pf -= 1;
    return tmp;
}

const Fixed  &Fixed::min(const Fixed &f1, const Fixed &f2)
{
	if (f1 <= f2)
		return (f1);
	return (f2);
}

const Fixed  &Fixed::max(const Fixed &f1, const Fixed &f2)
{
	if (f1 >= f2)
		return (f1);
	return (f2);
}

Fixed  &Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1 <= f2)
		return (f1);
	return (f2);
}

Fixed  &Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1 >= f2)
		return (f1);
	return (f2);
}

//GETTERS & SETTERS
int Fixed::getRawBits(void) const
{
	return (_pf);
}

void Fixed::setRawBits(int const raw)
{
	_pf = raw;
}

//OTHER
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


