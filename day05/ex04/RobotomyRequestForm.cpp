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

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form ("Robotomy Request Form", 72, 45)
{
	setTarget(target);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
  print();
	std::cout << " removed form" << std::endl;
	return ;
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &f) : Form("Robotomy Request Form", 72, 45)
{
	*this = f;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& f)
{
	return(*this);
}


//GETTERS
//SETTERS

//OTHERS
void RobotomyRequestForm::beExecuted()
{
  if (rand() % 2)
    std::cout << "* Bzzzzz Bzzz * " << getTarget() << " has been robotomized !" << std::endl;
  else
    std::cout << "...\n...\nFail to robotomize " << getTarget() << std::endl;
}


