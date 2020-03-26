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

#include "HumanA.hpp"


HumanA::HumanA(void)
{
	_name = "Bob";
 	_weapon = new Weapon();
}

HumanA::HumanA(std::string name)
{
	_name = name;
 	_weapon = new Weapon();
}

HumanA::HumanA(std::string name, Weapon &weapon)
{
	_name = name;
 	_weapon = &weapon;
}
//GETTERS
std::string HumanA::get_name()
{
	return(_name);
}
Weapon& HumanA::get_weapon()
{
	return(*_weapon);
}

//SETTERS
void HumanA::set_name(std::string name)
{
	_name = name;
}
void HumanA::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

//OTHERS
void HumanA::attack(void)
{
	std::cout << _name << " attacks with his " << _weapon->getType()<< std::endl;
}


