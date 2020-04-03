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

#include "OfficeBlock.hpp"


int main()
{
	Intern idiotOne;
	Bureaucrat hermes = Bureaucrat("Hermes Conrad", 12);
	Bureaucrat bob = Bureaucrat("Bobby Bobson", 150);
	OfficeBlock ob;
	ob.setIntern(idiotOne);
	ob.setSigner(bob);
	ob.setExecutor(hermes);
	try
	{
	 	//ob.doBureaucracy("presidential pardon", "Michael Scolfield");		//25 5 
	 	ob.doBureaucracy("robotomy request", "Teachers");					//72, 45 
	 	//ob.doBureaucracy("shrubbery creation", "Mayor's house");			//145 137
	}
	// catch (Some::SpecificException & e)
	// {
	//  std::cout << "Failed to process this form because \""<< e.what() << "\""<<std::endl; 
	// }
	catch (std::exception & e)
	{
		std::cout << "Failed to process this form because \""<< e.what() << "\""<<std::endl;
	}
}

// Intern creates a Mutant Pig Termination Form (s.grade 130, ex.grade 50) targeted on Pigley (Unsigned)
// Bureaucrat Bobby Bobson (Grade 123) signs a Mutant Pig Termination Form (s.grade 130, ex.grade 50)
// targeted on Pigley (Unsigned)
// Bureaucrat Hermes Conrad (Grade 37) executes a Mutant Pig Termination Form (s.grade 130, ex.grade 50)
// targeted on Pigley (Signed)
// That'll do, Pigley. That'll do ...
