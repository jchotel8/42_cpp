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

#include "SuperMutant.hpp"

//CONSTRUCTORS
SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Break everything !" << std::endl;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh ..." << std::endl;
	return ;
}


//OTHER
void		SuperMutant::takeDamage(int amount)
{
	if (amount > 0 && _hp > 0)
	{
		amount -= 3;
		_hp -= amount;
		if (_hp <= 0)
		{
			_hp = 0;
			std::cout << "Aaargh ..." << std::endl;
		}

	}

	//std::cout << _output << std::endl;
}

// std::ostream	&operator<<(std::ostream &out, const Victim &v)
// {
// 	out << "I am "<< v.getName() <<" and i like otters!" << std::endl;
// 	return (out);
// }
