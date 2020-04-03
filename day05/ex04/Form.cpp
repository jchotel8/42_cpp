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
}

Form::~Form(void)
{}

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
std::string Form::getTarget() const
{
  return (_target);
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

void    Form::setTarget(std::string target)
{
  _target = target;
}


//OTHERS
void    Form::beSigned(Bureaucrat *b)
{
  if (b->getGrade() <= _gradeS)
    _signed = true;
  else
    throw Form::GradeTooHighException(); 
}

void Form::execute(Bureaucrat const& executor)
{
  if (!_signed)
    throw Form::NotSignedException();
  else if (executor.getGrade() > _gradeE)
    throw Form::GradeTooHighException();
  beExecuted();

}

void Form::beExecuted()
{}

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
  return("need to pass it over to superior, he'll give it to his boss and so on");
}

/*-----------TOOHIGH-------------*/
Form::NotSignedException::NotSignedException()
{}

Form::NotSignedException::~NotSignedException() throw()
{}

Form::NotSignedException::NotSignedException(const Form::NotSignedException &b)
{
  *this = b;
}

Form::NotSignedException& Form::NotSignedException::operator=(const Form::NotSignedException& b)
{
  return(*this);
}

char const        *Form::NotSignedException::what(void) const throw()
{
  return("not signed, please try again in 3 weeks");
}
