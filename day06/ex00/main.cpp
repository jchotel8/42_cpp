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

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <cmath>
#include <cfloat>

class ImpossibleException : public std::exception
{
    public:
        ImpossibleException()
        {};
        ImpossibleException(const ImpossibleException &m)
        {
        	*this = m;
        }
        ImpossibleException& operator=(const ImpossibleException &m)
        {
        	return(*this);
        }
        ~ImpossibleException(void) throw()
        {}
        char const *what(void) const throw()
        {
        	return("impossible");
        }
};

class NonDisplayableException : public std::exception
{
    public:
        NonDisplayableException()
        {};
        NonDisplayableException(const NonDisplayableException &m)
        {
        	*this = m;
        }
        NonDisplayableException& operator=(const NonDisplayableException &m)
        {
        	return(*this);
        }
        ~NonDisplayableException(void) throw()
        {}
        char const *what(void) const throw()
        {
        	return("Non displayable");
        }
};

int getPrecision(const char *str)
{
	int i = 0;
	int j = 0;
	while (str[i] && str[i] != '.')
		i++;
	if (str[i] == '.')
		i++;
	while (str[i+j] && isdigit(str[i+j]))
		j++;
	if (j == 0)
		j = 1;
	return (j);
}

void doString(std::string str)
{
	std::cout << "string\t:\t" << str <<std::endl;
}

void doChar(double value)
{
	std::cout << "char\t:\t";
	try
	{
		char c = static_cast<char>(value);
		if (std::isnan(value))
			throw ImpossibleException::ImpossibleException();
		else if(std::isprint(c))
		 	std::cout << "'" << c << "'"<< std::endl;
		else
			throw NonDisplayableException::NonDisplayableException();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void doInt(double value)
{
	std::cout << "int\t:\t";
	try
	{
		if (std::isnan(value))
			throw ImpossibleException::ImpossibleException();
		else
			std::cout << static_cast<int>(value) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

}

void doFloat(double value, int precision)
{
	std::cout << "float\t:\t";
	try
	{
		std::cout << std::setprecision(precision) << std::fixed << value << "f" <<std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void doDouble(double value, int precision)
{
	std::cout << "double\t:\t";
	try
	{
		std::cout << std::setprecision(precision) << std::fixed << value << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}


int main(int ac, char *av[]) 
{
	if (ac < 2)
    {
	    std::cout << "False usage of program" << std::endl;
        return (0);
    }
    for (int i = 1; i < ac; i++)
    {
    	int precision = getPrecision(av[i]);
    	double value = atof(av[i]);

	    doString(av[i]);
	    doChar(value);
	    doInt(value);
	    doFloat(value, precision);
	    doDouble(value, precision);
	    std::cout << "--------------------------" << std::endl;
	}
	return 0;
}


// ./convert 	0
// 	char: 		Non displayable
// 	int: 		0
// 	float: 		0.0f
// 	double: 	0.0
// ./convert 	nan
// 	char: 		impossible
// 	int: 		impossible
// 	float: 		nanf
// 	double: 	nan
// ./convert 	42.0f
// 	char: 		'*'
// 	int: 		42
// 	float: 		42.0f
// 	double: 	42.0
