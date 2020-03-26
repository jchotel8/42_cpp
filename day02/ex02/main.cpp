 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchotel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 05:54:59 by jchotel           #+#    #+#             */
/*   Updated: 2020/03/12 08:01:05 by jchotel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(void) 
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;  			// 0
	std::cout << ++a << std::endl;			// 0.00390625
	std::cout << a << std::endl;			// 0.00390625
	std::cout << a++ << std::endl;			// 0.00390625
	std::cout << a << std::endl;			// 0.0078125
	std::cout << b << std::endl;			// 10.1016
	std::cout << Fixed::max(a, b) << std::endl;	//10.1016
	return 0;
}
