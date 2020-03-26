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

#include "zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name, std::string type)
{
	_name = name;
	_type = type;
    return ;
}

Zombie::Zombie(void)
{
	_name = "georgette";
	_type = "hector";
    return ;
}

Zombie::~Zombie(void)
{
    return ;
}

void Zombie::setType(std::string str)
{
    this->_type = str;
    return ;
}

void Zombie::setName(std::string str)
{
    this->_name = str;
    return ;
}

void Zombie::announce(void)
{
    std::cout << "<" + this->_name + " (" + this->_type + ")> " <<std::endl;
}