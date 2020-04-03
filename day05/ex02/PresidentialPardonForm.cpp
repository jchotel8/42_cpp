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

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form ("Presidential Pardon Form", 145, 137)
{
	_target = target;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
  print();
	std::cout << " removed form" << std::endl;
	return ;
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &f) : Form("Presidential Pardon Form", 145, 137)
{
	*this = f;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& f)
{
	_target = f._target;
	return(*this);
}


//GETTERS
std::string PresidentialPardonForm::getTarget() const
{
  return (_target);
}
//SETTERS
void    PresidentialPardonForm::setTarget(std::string target)
{
  _target = target;
}

//OTHERS
void PresidentialPardonForm::beExecuted()
{
    std::cout << _target << " has received a Presidential Pardon from Zafod Beeblebrox" << std::endl;
}


