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

#include "Bureaucrat.hpp"


//CONSTRUCTORS
Bureaucrat::Bureaucrat(std::string name)
{
	_name = name;
    _grade = 150;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	_name = name;
  if(grade > 150)
      throw Bureaucrat::GradeTooLowException();
  else if (grade < 1)
      throw Bureaucrat::GradeTooHighException();
  else
    _grade = grade;
}

Bureaucrat::~Bureaucrat(void)
{}

Bureaucrat::Bureaucrat(const Bureaucrat &b)
{
	*this = b;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& b)
{
	_name = b._name;
	_grade = b._grade;
	return(*this);
}


//GETTERS
std::string Bureaucrat::getName() const
{
	return (_name);
}

int			Bureaucrat::getGrade() const
{
	return (_grade);
}

//SETTERS
void 		Bureaucrat::setName(std::string name)
{
	_name = name;
}

void 		Bureaucrat::setGrade(int grade)
{
    if(grade > 150)
    {
      std::cout << "[" << _name << ", "<< _grade << "] ";
      throw Bureaucrat::GradeTooLowException();
    }
    else if (grade < 1)
    {
      std::cout << "[" << _name << ", "<< _grade << "] ";
      throw Bureaucrat::GradeTooHighException();
    }
    else if (grade > _grade)
    {
      _grade = grade;
      std::cout << "[" << _name << ", "<< _grade << "] ";
      std::cout << "just got downgraded due to his lack of stapler skills !" << std::endl;
    }
    else
    {
      _grade = grade;
      std::cout << "[" << _name << ", "<< _grade << "] ";
      std::cout << "was promotted : let's do another coffee break to celebrate !" << std::endl ;
    }
}


//OTHERS
void		Bureaucrat::incGrade(int amount)
{
	if (amount > 0)
		setGrade(_grade - amount);
}

void		Bureaucrat::decGrade(int amount)
{
	if (amount > 0)
		setGrade(_grade + amount);
}

void		Bureaucrat::incGrade()
{
	setGrade(_grade - 1);
}

void		Bureaucrat::decGrade()
{
	setGrade(_grade + 1);
}

void    Bureaucrat::signForm(Form *f)
{
    std::cout << "Bureaucrat [" << _name << ", " << _grade << 
    "] signs ";
    f->print();
    std::cout << " targeted on " << f->getTarget() << std::endl;
    f->beSigned(this);
}

void    Bureaucrat::executeForm(Form *f)
{
    std::cout << "Bureaucrat [" << _name << ", " << _grade << 
    "] executed ";
    f->print();
    std::cout << " targeted on " << f->getTarget() << std::endl;
    f->execute(*this);
}


std::ostream	&operator<<(std::ostream &out, const Bureaucrat &b)
{
	out << "[" << b.getName() << ", " << b.getGrade() << "] I'm just a regular degular shmeglar bureaucrat..." << std::endl;
	return (out);
}







/**********************************
*************EXCEPTIONS************
**********************************/

/*-----------TOOLOW--------------*/
Bureaucrat::GradeTooLowException::GradeTooLowException()
{
  std::cout << "Just fire the guy already !" << std::endl;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{}

Bureaucrat::GradeTooLowException::GradeTooLowException(const Bureaucrat::GradeTooLowException &b)
{
  *this = b;
}

Bureaucrat::GradeTooLowException& Bureaucrat::GradeTooLowException::operator=(const Bureaucrat::GradeTooLowException& b)
{
  return(*this);
}

char const        *Bureaucrat::GradeTooLowException::what(void) const throw()
{
  return("--------------Too Low-----------");
}

/*-----------TOOHIGH-------------*/
Bureaucrat::GradeTooHighException::GradeTooHighException()
{
  std::cout << "He can't possibly be human !" << std::endl;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{}

Bureaucrat::GradeTooHighException::GradeTooHighException(const Bureaucrat::GradeTooHighException &b)
{
  *this = b;
}

Bureaucrat::GradeTooHighException& Bureaucrat::GradeTooHighException::operator=(const Bureaucrat::GradeTooHighException& b)
{
  return(*this);
}

char const        *Bureaucrat::GradeTooHighException::what(void) const throw()
{
  return("--------------Too High-----------");
}



