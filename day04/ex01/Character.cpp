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

#include "Character.hpp"

Character::Character(std::string const & name) : _weapon(NULL)
{
	_name = name;
    _ap = 40;
    //std::cout << "Character is created" << std::endl;
}

Character::~Character(void)
{
	std::cout << "Character destroyed" << std::endl;
	return ;
}


//GETTERS
std::string Character::getName() const
{
	return (_name);
}
int Character::getAP() const
{
	return (_ap);
}
AWeapon *Character::getWeapon() const
{
	return (_weapon);
}


//SETTERS
void 		Character::setName(std::string name)
{
	_name = name;
}
void 		Character::setAP(int ap)
{
	_ap = ap;
}

//OTHER
void        Character::equip(AWeapon *w)
{
	_weapon = w;
}

void        Character::attack(Enemy *e)
{
	if (_ap >= _weapon->getAPCost())
	{
		_ap -= _weapon->getAPCost();
		std::cout << _name << " attack " << e->getType()
		<< " with a " << _weapon->getName() << std::endl;
		_weapon->attack();
		e->takeDamage(_weapon->getDamage());
	}
}





std::ostream	&operator<<(std::ostream &out, const Character &c)
{
	if (c.getWeapon() == NULL)
		out << c.getName() << " has " << c.getAP() <<" AP and is unarmed" << std::endl;
	else
		out << c.getName() << " has " << c.getAP() <<" AP and carries a " << c.getWeapon()->getName() << std::endl;
	return (out);
}
