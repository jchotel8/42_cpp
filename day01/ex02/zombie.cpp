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

#include "zombie.h"

Zombie::Zombie(void)
{
	_name = "georgette";
 	_type = "granny";
}

Zombie::~Zombie(void)
{
	_name = "hector";
 	_type = "fat";
}

Zombie::Zombie(std::string name, std::string type)
{
	_name = name;
 	_type = type;
}
//GETTERS
std::string Zombie::get_name()
{
	return(_name);
}
std::string Zombie::get_type()
{
	return(_type);
}

//SETTERS
void Zombie::set_name(std::string name)
{
	_name = name;
}
void Zombie::set_type(std::string type)
{
	_type = type;
}


//OTHERS
std::string Zombie::print()
{
	std::string res = "<" +_name + " ("+ _type +")>";
	return(res);
}

void Zombie::advert()
{
	std::cout << print() << " Braiiiiiiinnnssss ..." <<std::endl;
}

void Zombie::announce()
{
	std::cout << print() <<std::endl;
}
