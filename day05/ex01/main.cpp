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
#include "Form.hpp"

int main(void)
{
	try
	{
		Bureaucrat* bob = new Bureaucrat("bob");
		Form*	c28b = new Form("c28b", 12, 120);
		bob->signForm(c28b);
		std::cout << *c28b;
	}
	catch (std::exception &e)
	{
		std::cout << "ERROR Bob" << std::endl;
	}

	std::cout << std::endl;
	try
	{
		Bureaucrat* ted = new Bureaucrat("ted", 12);
		Form*	c28b = new Form("c28b", 12, 120);
		ted->signForm(c28b);
		std::cout << *c28b;
	}
	catch (std::exception &e)
	{
		std::cout << "ERROR Ted" << std::endl;
	}

}
