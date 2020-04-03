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

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage)
{
	_name = name;
    _apcost = apcost;
    _damage = damage;
    _output = "";
    //std::cout << "Weapon is created" << std::endl;
}
AWeapon::AWeapon(const AWeapon &w)
{
	*this = w;
}
AWeapon::AWeapon()
{}
AWeapon::~AWeapon(void)
{
	std::cout << "Weapon destroyed" << std::endl;
	return ;
}
AWeapon& AWeapon::operator=(const AWeapon& w)
{
	_name = w._name;
	_apcost = w._apcost;
	_damage = w._damage;
	_output = w._output;
	return(*this);
}


//GETTERS
std::string AWeapon::getName() const
{
	return (_name);
}
int AWeapon::getAPCost() const
{
	return (_apcost);
}
int AWeapon::getDamage() const
{
	return (_damage);
}


//SETTERS
void 		AWeapon::setName(std::string name)
{
	_name = name;
}
void 		AWeapon::setAPCost(int apcost)
{
	_apcost = apcost;
}
void 		AWeapon::setDamage(int damage)
{
	_damage = damage;
}

//OTHER
void		AWeapon::attack() const
{
	std::cout << _output << std::endl;
}

// std::ostream	&operator<<(std::ostream &out, const Sorcerer &s)
// {
// 	out << "I am "<< s.getName() << ", " << s.getTitle() <<", and i like ponies!" << std::endl;
// 	return (out);
// }
