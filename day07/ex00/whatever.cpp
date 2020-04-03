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

#include <iostream>
#include <string>


template <typename T> void swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
};

template <typename T> T const &min(T &a, T &b)
{
	return (a < b ? a : b);
};

template <typename T> T const &max(T &a, T &b)
{
	return (a > b ? a : b);
};



int main() 
{
	std::cout << "------------------INT-----------------" <<std::endl;
	int a = 0;
	int b = 6;
	std::cout << "INIT\ta :\t" << a << "\tb :\t" << b <<std::endl;
	swap(a, b);
	std::cout << "SWAP\ta :\t" << a << "\tb :\t" << b <<std::endl;
	std::cout << ".\tMAX :\t" << max(a, b) << "\tMIN :\t" << min(a, b) <<std::endl;

	std::cout << "------------------CHAR----------------" <<std::endl;
	char c = 'a';
	char d = 'z';
	std::cout << "INIT\tc :\t" << c << "\td :\t" << d <<std::endl;
	swap(c, d);
	std::cout << "SWAP\ta :\t" << c << "\tb :\t" << d <<std::endl;
	std::cout << ".\tMAX :\t" << max(c, d) << "\tMIN :\t" << min(c, d) <<std::endl;\

	std::cout << "-----------------STRING---------------" <<std::endl;
	std::string e = "blabla";
	std::string f = "bimbim";
	std::cout << "INIT\te :\t" << e << "\tf :\t" << f <<std::endl;
	swap(e, f);
	std::cout << "SWAP\te :\t" << e << "\tf :\t" << f <<std::endl;
	std::cout << ".\tMAX :\t" << max(e, f) << "\tMIN :\t" << min(e, f) <<std::endl;

	return 0;
}
