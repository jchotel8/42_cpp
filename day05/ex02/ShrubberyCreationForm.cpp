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

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form ("Shrubbery Creation Form", 145, 137)
{
	_target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
  print();
	std::cout << " removed form" << std::endl;
	return ;
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &f) : Form("Shrubbery Creation Form", 145, 137)
{
	*this = f;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& f)
{
	_target = f._target;
	return(*this);
}


//GETTERS
std::string ShrubberyCreationForm::getTarget() const
{
  return (_target);
}
//SETTERS
void    ShrubberyCreationForm::setTarget(std::string target)
{
  _target = target;
}

//OTHERS
void ShrubberyCreationForm::beExecuted()
{
  std::ofstream file;

  file.open(_target + "_shruberry");
  file << "      .{{}}}}}}.\n" <<
          "      {{{{{{(`)}}}.\n" <<
          "    {{{(`)}}}}}}}}}\n" <<
          "   }}}}}}}}}{{(`){{{\n" <<
          "   }}}}{{{{(`)}}{{{{\n" <<
          "  {{{(`)}}}}}}}{}}}}}\n" <<
          " {{{{{{{{(`)}}}}}}}}}}\n" <<
          " {{{{{{{}{{{{(`)}}}}}}\n" <<
          "  {{{{{(`)   {{{{(`)}'\n" <<
          "   `\"\"'\" |   | \"'\"'`\n" <<
          "   (`)  /     \\ \n" <<
          "  ~~~~~~~~~~~~~~~~~~~"<< std::endl;
 file.close();
}


