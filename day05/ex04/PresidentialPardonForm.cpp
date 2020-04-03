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

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form ("Presidential Pardon Form", 25, 5)
{
	setTarget(target);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
  print();
	std::cout << " removed form" << std::endl;
	return ;
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &f) : Form("Presidential Pardon Form", 25, 5)
{
	*this = f;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& f)
{
	return(*this);
}


//GETTERS
//SETTERS

//OTHERS
void PresidentialPardonForm::beExecuted()
{
    std::cout << getTarget() << " has received a Presidential Pardon from Zafod Beeblebrox" << std::endl;
}


