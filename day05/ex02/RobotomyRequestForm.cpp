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

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form ("Robotomy Request Form", 145, 137)
{
	_target = target;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
  print();
	std::cout << " removed form" << std::endl;
	return ;
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &f) : Form("Robotomy Request Form", 145, 137)
{
	*this = f;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& f)
{
	_target = f._target;
	return(*this);
}


//GETTERS
std::string RobotomyRequestForm::getTarget() const
{
  return (_target);
}
//SETTERS
void    RobotomyRequestForm::setTarget(std::string target)
{
  _target = target;
}

//OTHERS
void RobotomyRequestForm::beExecuted()
{
  if (rand() % 2)
    std::cout << "* Bzzzzz Bzzz * " << _target << " has been robotomized !" << std::endl;
  else
    std::cout << "...\n...\nFail to robotomize " << _target << std::endl;
}


