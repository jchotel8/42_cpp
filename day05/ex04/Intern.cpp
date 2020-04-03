/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchotel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 05:54:59 by jchotel           #+#    #+#             */
/*   Updated: 2020/03/12 08:01:05 by jchotel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


//CONSTRUCTORS
Intern::Intern(void)
{}

Intern::~Intern(void)
{}

Intern::Intern(const Intern &b)
{
	*this = b;
}

Intern& Intern::operator=(const Intern& b)
{
	return(*this);
}


//GETTERS

//SETTERS

//OTHERS

Form     *Intern::makePPF(std::string target)
{
  return (new PresidentialPardonForm(target));
}

Form     *Intern::makeRRF(std::string target)
{
  return (new RobotomyRequestForm(target));
}

Form     *Intern::makeSCF(std::string target)
{
  return (new ShrubberyCreationForm(target));
}

Form     *Intern::makeForm(std::string name, std::string target)
{
  std::string _forms[] = 
    {"shrubbery creation",
     "robotomy request",
     "presidential pardon"};
  Form  *(Intern::*action[])(std::string) =
  {
    &Intern::makeSCF,
    &Intern::makeRRF,
    &Intern::makePPF
  };
  for (int i = 0; i < 3; i++)
    if (_forms[i] == name)
    {
      Form *form = (this->*action[i])(target);
      std::cout << "Intern creates "; 
      form->print();
      std::cout << " targeted on " << form->getTarget() << std::endl;
      return (form);
    }
  throw InvalidFormExeption();
  return (NULL);
}



/**********************************
*************EXCEPTIONS************
**********************************/

/*--------INVALID FORM-----------*/
Intern::InvalidFormExeption::InvalidFormExeption()
{}

Intern::InvalidFormExeption::~InvalidFormExeption() throw()
{}

Intern::InvalidFormExeption::InvalidFormExeption(const Intern::InvalidFormExeption &b)
{
  *this = b;
}

Intern::InvalidFormExeption& Intern::InvalidFormExeption::operator=(const Intern::InvalidFormExeption& b)
{
  return(*this);
}

char const        *Intern::InvalidFormExeption::what(void) const throw()
{
  return("Intern is stupid and doesn't know this form.");
}




