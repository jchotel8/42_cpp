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

#include "MiningBarge.hpp"

MiningBarge::MiningBarge()
{
	for (int i = 0; i < 4; i++)
		_miners[i] = NULL;
	std::cout << "The NASA ordered a new Barge to SpaceX" <<std::endl;
}

MiningBarge::MiningBarge(const MiningBarge &m)
{
	*this = m;
}

MiningBarge::~MiningBarge(void)
{
	for (int i = 0; i < 4; i++)
		delete (_miners[i]);
	return ;
}

MiningBarge& MiningBarge::operator=(const MiningBarge& m)
{
	for (int i = 0; i < 4; i++)
		_miners[i] = m._miners[i];
	return(*this);
}


//GETTERS

//SETTERS


//OTHER
void MiningBarge::equip(IMiningLaser* l)
{
	for (int i = 0; i < 4; i++)
	{
		if (_miners[i] == NULL)
		{
			_miners[i] = l;
			return;
		}
	}
}
void MiningBarge::mine(IAsteroid* a) const
{
	for (int i = 0; i < 4; i++)
		if (_miners[i] != NULL)
			_miners[i]->mine(a);
}

