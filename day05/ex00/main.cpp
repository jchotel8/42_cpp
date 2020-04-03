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

#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat* bob = new Bureaucrat("bob", 150);
		std::cout << *bob;
		bob->incGrade();
		bob->incGrade(149);
	}
	catch (std::exception &e)
	{
		std::cout << "ERROR Bob" << std::endl;
	}

	try
	{
		Bureaucrat	ted("Teddy", 0);
	}
	catch (std::exception &e)
	{
		std::cout << "ERROR Ted" << std::endl;
	}

}
