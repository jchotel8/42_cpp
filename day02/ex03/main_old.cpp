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

int isOperator(char c)
{
	if (c == '(' || c == ')')
		return (2);
	if (c == '+' || c == '-'|| c == '*' || c == '/')
		return (1);
	return (0);
}

void skip_p(std::string &word, int &p)
{
	while (word[0] == '(')
	{
  		p++;
  		word = word.substr(1, word.length());
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
		std::istringstream calc("2 * 10 + 3 * 5"); // = 20 + 15 = 45
		std::string term;
		std::string ope = "+";
		int p = 0;
		float val;
		while (!calc.eof())
	  	{
	  		calc >> term;
	  		skip_p(term, p);
	  		if(std::stringstream(term) >> val)	//If it is a number
	  		{
	  			res = doOperator(res, Fixed(val), ope);
		    	std::cout << res << std::endl;
	  		}
		    ope = term;							//save previous operator
	  	}
	}
	return 0;
}
