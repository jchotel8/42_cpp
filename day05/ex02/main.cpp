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
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main(void)
{
	try
	{
		Bureaucrat* sam = new Bureaucrat("sam", 12);
		Bureaucrat* bob = new Bureaucrat("bob");
		Form*	s31a = new PresidentialPardonForm("Michael Scolfield");
		Form*	b48 = new RobotomyRequestForm("Teachers");
		Form*	d9 = new ShrubberyCreationForm("Mayor's house");

		std::cout << std::endl;
		sam->executeForm(d9);
		sam->signForm(s31a);
		sam->signForm(b48);
		sam->signForm(d9);

		std::cout << std::endl;
		std::cout << *s31a;
		std::cout << *b48;
		std::cout << *d9;

		std::cout << std::endl;
		sam->executeForm(s31a);
		sam->executeForm(b48);
		sam->executeForm(d9);
		bob->executeForm(b48);
	}
	catch (std::exception &e)
	{
		std::cout << "ERROR Sam" << std::endl;
	}

}
