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

#include "Array.hpp"

int main() 
{
	Array<int> a(10);
	std::cout << "int\t:\t";
	for (int i = 0; i < a.size(); i++)
	{
		a[i] = i;
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;

	Array<std::string> b(5);
	std::string test[] = {"Un", "oiseau", "fait", "son", "nid", "!"};
	try 
	{
		std::cout << "string\t:\t";
		for (unsigned int i = 0; i < b.size() + 1; i++) 
		{
			b[i] = test[i];
			std::cout << b[i] << " ";
		}
	} 
	catch (std::exception& e) 
	{
		std::cout << std::endl;
		std::cerr << e.what() << std::endl;
	}
}


