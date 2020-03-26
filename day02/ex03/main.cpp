 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchotel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 05:54:59 by jchotel           #+#    #+#             */
/*   Updated: 2020/03/12 08:01:05 by jchotel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <string>
#include <iostream>
#include <sstream>

//Avec stringstream récuper float de "18.18 3 2"
//faire un test de compatibilité

void skip_p(std::string &word, int &p)
{
	while (word[0] == '(')
	{
  		p++;
  		word = word.substr(1, word.length());
  	}
}



std::string doMulDiv(std::string &term)
{
	float val1;
	Fixed rep(1);

	while (term.find_first_of("*/") != std::string::npos)
	{
		std::stringstream(term) >> val1;
		term = term.substr(term.find_first_of("*/") + 1, term.length());
		rep = Fixed(rep * Fixed(val1));
	}
	std::stringstream(term) >> val1;
	rep = Fixed(rep * Fixed(val1));
	//std::cout << "fac " <<rep << std::endl;
	std::ostringstream rep_str;

	rep_str << rep;
	return (rep_str.str());
}

std::string getMulDiv(std::string &calc) 
{
	std::string term1;
	std::string term2 = calc;
	std::string ope;
	std::ostringstream replace;
	while (term2.find_first_of("+-") != std::string::npos)
	{
		term1 = term2.substr(0, term2.find_first_of("+-"));
		ope = term2.substr(term2.find_first_of("+-"), 1);
		replace << doMulDiv(term1) << ope;
		term2 = term2.substr(term2.find_first_of("+-") + 1, term2.length());

	}
	replace << doMulDiv(term2);
	std::cout << "w/out Mul : " << replace.str() << std::endl;
	Fixed rep(4);
	return (replace.str());
}

std::string doAddDec(std::string &calc)
{
	while (calc.find_first_of("+-") != std::string::npos)
	{
		std::stream
	}
}


void doParenthesis(std::string &calc)
{
	while (calc.find_last_of("(") != std::string::npos)
	{
		std::string p = calc;
		p = p.substr(0, p.find_first_of(")"));
	  	p = p.substr(p.find_last_of("(") + 1, p.length());
	  	std::string rest = calc.substr(calc.find_first_of(")") + 1, calc.length());
	  	//std::cout << "parenthesis : " << p << std::endl;
	  	//Calculate answer
	  	std::string rep = getMulDiv(p);
	  	rep = doAddDec(rep);

	  	std::ostringstream new_calc;
	  	new_calc << calc.substr(0, calc.find_first_of("(")) << rep << rest;
	  	calc = new_calc.str();
	  	std::cout << "final calc : " << calc << '\n';
	}
}


Fixed doOperator(const Fixed &a, const Fixed &b, std::string ope)
{
	if(!ope.compare("+"))
		return (a + b);
	if(!ope.compare("-"))
		return (a - b);
	if(!ope.compare("*"))
		return (a * b);
	if(!ope.compare("/"))
		return (a / b);
	return (a);
}

int main(int ac, char **av) 
{
	if (ac > 1)
	{
		Fixed res;
		std::string calc("(2 * 10 * 2 + 3 * 2 - 1) + (3 * 5 - 2) * 7 + (10 - 3)"); // = 20 + 15 = 45
		//std::string term;
		//std::string ope = "+";
		std::cout << calc << std::endl;
		float val;
		doParenthesis(calc);
	}
	return 0;
}
