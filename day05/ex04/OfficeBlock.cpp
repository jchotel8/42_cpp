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

#include "OfficeBlock.hpp"


//CONSTRUCTORS
OfficeBlock::OfficeBlock()
{
  _intern = NULL;
  _signer = NULL;
  _executor = NULL;

}

OfficeBlock::OfficeBlock(Intern intern, Bureaucrat signer, Bureaucrat executor)
{
  _intern = &intern;
  _signer = &signer;
  _executor = &executor;
}

OfficeBlock::~OfficeBlock(void)
{}


//GETTERS
Intern *OfficeBlock::getIntern() const
{
	return (_intern);
}

Bureaucrat	*OfficeBlock::getSigner() const
{
	return (_signer);
}

Bureaucrat  *OfficeBlock::getExecutor() const
{
  return (_executor);
}

// //SETTERS
void 		OfficeBlock::setIntern(Intern intern)
{
	_intern = &intern;
}

void    OfficeBlock::setSigner(Bureaucrat signer)
{
  _signer = &signer;
}

void    OfficeBlock::setExecutor(Bureaucrat executor)
{
  _executor = &executor;
}


//OTHERS
void    OfficeBlock::doBureaucracy(std::string name, std::string target)
{
  if (_intern == NULL || _signer == NULL || _executor == NULL)
    throw MissingEmployeeException();                                   //MISSING EMPLOYEE
  Form *form = _intern->makeForm(name, target);                         //DOES NOT KNOW THIS FORM
  _signer->signForm(form);                                              //TOO LOW
  _executor->executeForm(form);                                         //TOO LOW
}



/**********************************
*************EXCEPTIONS************
**********************************/

//"You filled out form c28b instead c28c, give it to the Bureau that treats all forms endding by c and not the one handling '28'."

/*-------MISSINGEMPLOYEE---------*/
OfficeBlock::MissingEmployeeException::MissingEmployeeException()
{}

OfficeBlock::MissingEmployeeException::~MissingEmployeeException() throw()
{}

OfficeBlock::MissingEmployeeException::MissingEmployeeException(const OfficeBlock::MissingEmployeeException &b)
{
  *this = b;
}

OfficeBlock::MissingEmployeeException& OfficeBlock::MissingEmployeeException::operator=(const OfficeBlock::MissingEmployeeException& b)
{
  return(*this);
}

char const        *OfficeBlock::MissingEmployeeException::what(void) const throw()
{
  return("Someone is taking a coffee break, he'll come back in an hour, but then it's lunch time : come back tomorrow.");
}


