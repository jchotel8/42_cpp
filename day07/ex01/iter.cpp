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

template <typename T> void test(T &a)
{
	a += 1;
}

template <typename T> void iter(T *array, int length, void (*f)(T &))
{
	for (int i = 0; i < length; i++)
	{
		(*f)(array[i]);
	}
}

template <typename T> void print(T &element)
{
    std::cout << element << " ";
    return ;
}


int main() 
{
	int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	std::cout << "array : ";
	iter(array, 10, print);
	std::cout << std::endl;	

	std::cout << "test  : ";
	iter(array, 10, test);
	iter(array, 10, print);
	std::cout << std::endl;	

	return 0;
}
