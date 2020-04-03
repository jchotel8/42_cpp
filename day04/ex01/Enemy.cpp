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

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type)
{
	_type = type;
    _hp = hp;
    //std::cout << "Enemy is created" << std::endl;
}

Enemy::~Enemy(void)
{
	std::cout << "Enemy destroyed" << std::endl;
	return ;
}


//GETTERS
std::string Enemy::getType() const
{
	return (_type);
}
int Enemy::getHP() const
{
	return (_hp);
}


//SETTERS
void 		Enemy::setType(std::string type)
{
	_type = type;
}
void 		Enemy::setHP(int hp)
{
	_hp = hp;
}

//OTHER
void		Enemy::takeDamage(int amount)
{
	if (amount > 0 && _hp > 0)
	{
		_hp -= amount;
		if (_hp <= 0)
		{
			_hp = 0;
			std::cout << "* SPROTCH *" << std::endl;
		}
	}
	//std::cout << _output << std::endl;
}

// std::ostream	&operator<<(std::ostream &out, const Sorcerer &s)
// {
// 	out << "I am "<< s.getName() << ", " << s.getTitle() <<", and i like ponies!" << std::endl;
// 	return (out);
// }
