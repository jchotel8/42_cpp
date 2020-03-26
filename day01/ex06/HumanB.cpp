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

#include "HumanB.hpp"


HumanB::HumanB(void)
{
	_name = "Bob";
 	_weapon = new Weapon();
}

HumanB::HumanB(std::string name)
{
	_name = name;
 	_weapon = new Weapon();
}

HumanB::HumanB(std::string name, Weapon &weapon)
{
	_name = name;
 	_weapon = &weapon;
}
//GETTERS
std::string HumanB::get_name()
{
	return(_name);
}
Weapon& HumanB::get_weapon()
{
	return(*_weapon);
}

//SETTERS
void HumanB::set_name(std::string name)
{
	_name = name;
}
void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

//OTHERS
void HumanB::attack(void)
{
	std::cout << _name << " attacks with his " << _weapon->getType()<< std::endl;
}


