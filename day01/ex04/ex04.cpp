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

#include <string>
#include <iostream>

int main(void)
{
	std::string hello = "HI THIS IS BRAIN";
	std::cout << "normal    : " << hello << std::endl;

	std::string *p = &hello;
	std::cout << "pointer   : " << *p << std::endl;

	std::string &r = hello;
	std::cout << "reference : " << r << std::endl;
	return 0;
}


