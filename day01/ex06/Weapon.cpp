/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchotel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 05:54:59 by jchotel           #+#    #+#             */
/*   Updated: 2020/03/12 08:01:05 by jchotel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon(void)
{
	_type = "crude spiked club";
 	_damage = 5;
}

Weapon::Weapon(std::string type)
{
	_type = type;
 	_damage = 5;
}

Weapon::Weapon(std::string type, int damage)
{
	_type = type;
 	_damage = damage;
}
//GETTERS
std::string Weapon::getType()
{
	return(_type);
}
int Weapon::get_damage()
{
	return(_damage);
}

//SETTERS
void Weapon::setType(std::string type)
{
	_type = type;
}
void Weapon::set_damage(int damage)
{
	_damage = damage;
}

