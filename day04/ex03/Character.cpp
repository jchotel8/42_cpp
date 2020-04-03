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

Character::Character()
{
	_name = "Donald";
	for (int i = 0; i < 4; i++)
		_potion[i] = NULL;
}
Character::Character(std::string name)
{
	_name = name;
	for (int i = 0; i < 4; i++)
		_potion[i] = NULL;
}
Character::Character(const Character &c)
{
	*this = c;
}
Character::~Character(void)
{
	return ;
}
Character& Character::operator=(const Character& m)
{
	return(*this);
}


//GETTERS
std::string const &Character::getName() const
{
	return (_name);
}


//SETTERS
void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_potion[i] == NULL)
		{
			_potion[i] = m;
			return;
		}
	}
}
void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && _potion[idx])
		_potion[idx] = NULL;
}

//OTHER
void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && _potion[idx])
		_potion[idx]->use(target);
}

std::ostream	&operator<<(std::ostream &out, const Character &c)
{
	//if (c.getCount() == 0)
	//	out << c.getName() << " does have potions." << std::endl;
	//else
		out << c.getName() << " has " << " potions." << std::endl;
	return (out);
}
