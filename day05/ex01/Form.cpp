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

#include "Form.hpp"

Form::Form(std::string name)
{
	_name = name;
  _signed = false;
  _gradeS = 150;
  _gradeE = 150;
  print();
  std::cout <<" new form available !" << std::endl;
}

Form::Form(std::string name, int gradeS, int gradeE)
{
	_name = name;
  _signed = false;
  if(gradeS > 150 || gradeE > 150)
      throw Form::GradeTooLowException();
  else if (gradeS < 1 || gradeE < 1)
      throw Form::GradeTooHighException();
  _gradeS = gradeS;
  _gradeE = gradeE;
  print();
  std::cout <<" new form available !" << std::endl;
}

Form::~Form(void)
{
  print();
	std::cout << " removed form" << std::endl;
	return ;
}
Form::Form(const Form &f)
{
	*this = f;
}

Form& Form::operator=(const Form& f)
{
	_name = f._name;
  _signed = f._signed;
	_gradeS = f._gradeS;
  _gradeE = f._gradeE;
	return(*this);
}

void Form::print()
{
  std::cout << "[" << _name << "("<< _signed << "), S"<< _gradeS << ", E"<< _gradeE<< "]";
}


//GETTERS
std::string Form::getName() const
{
	return (_name);
}

bool     Form::getSigned() const
{
  return (_signed);
}

int			Form::getGradeS() const
{
	return (_gradeS);
}

int     Form::getGradeE() const
{
  return (_gradeE);
}

//SETTERS
void 		Form::setName(std::string name)
{
	_name = name;
}

void    Form::setSigned(bool sign)
{
  _signed = sign;
}

void 		Form::setGradeS(int grade)
{
    if(grade > 150)
      throw Form::GradeTooLowException();
    else if (grade < 1)
      throw Form::GradeTooHighException();
    _gradeS = grade;
      print();
      std::cout << "just got updated !" << std::endl;
}

void    Form::setGradeE(int grade)
{
    if(grade > 150)
      throw Form::GradeTooLowException();
    else if (grade < 1)
      throw Form::GradeTooHighException();
    _gradeE = grade;
      print();
      std::cout << "just got updated !" << std::endl;
}


//OTHERS
void    Form::beSigned(Bureaucrat *b)
{
  if (b->getGrade() <= _gradeS)
    _signed = true;
  else
    throw Form::GradeTooHighException(); 
}


std::ostream	&operator<<(std::ostream &out, const Form &f)
{
	out << "[" << f.getName() << "("<< f.getSigned() << "), S"<< f.getGradeS() << ", E"<< f.getGradeE()<< "]"<< std::endl;
	return (out);
}




/**********************************
*************EXCEPTIONS************
**********************************/

/*-----------TOOLOW--------------*/
Form::GradeTooLowException::GradeTooLowException()
{}

Form::GradeTooLowException::~GradeTooLowException() throw()
{}

Form::GradeTooLowException::GradeTooLowException(const Form::GradeTooLowException &b)
{
  *this = b;
}

Form::GradeTooLowException& Form::GradeTooLowException::operator=(const Form::GradeTooLowException& b)
{
  return(*this);
}

char const        *Form::GradeTooLowException::what(void) const throw()
{
  return("This form is toilet paper...");
}

/*-----------TOOHIGH-------------*/
Form::GradeTooHighException::GradeTooHighException()
{}

Form::GradeTooHighException::~GradeTooHighException() throw()
{}

Form::GradeTooHighException::GradeTooHighException(const Form::GradeTooHighException &b)
{
  *this = b;
}

Form::GradeTooHighException& Form::GradeTooHighException::operator=(const Form::GradeTooHighException& b)
{
  return(*this);
}

char const        *Form::GradeTooHighException::what(void) const throw()
{
  return("Is there someone high enough to sign this form !?");
}
