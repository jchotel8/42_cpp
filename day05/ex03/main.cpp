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
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main(void)
{
	try
	{
		Bureaucrat* sam = new Bureaucrat("sam", 12);
		Bureaucrat* bob = new Bureaucrat("bob");
		Intern someRandomIntern;
		Form* 	b48 = someRandomIntern.makeForm("robotomy request", "Teachers");
		Form*	s31a = someRandomIntern.makeForm("presidential pardon", "Michael Scolfield");
		Form*	d9 = someRandomIntern.makeForm("shrubbery creation", "Mayor's house");
		Form*	f49_3 = someRandomIntern.makeForm("49.3", "Macron");

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
