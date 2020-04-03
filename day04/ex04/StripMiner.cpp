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

#include "StripMiner.hpp"

StripMiner::StripMiner()
{
	std::cout << "* strippy - strippy *" << std::endl;
}

StripMiner::StripMiner(const StripMiner &m)
{
	*this = m;
}

StripMiner::~StripMiner(void)
{
	return ;
}

StripMiner& StripMiner::operator=(const StripMiner& m)
{
	//_xp = m._xp;
	return(*this);
}


//GETTERS


//SETTERS


//OTHER
void StripMiner::mine(IAsteroid* a)
{
	std::cout << "* strip mining ... got " << a->beMined(this) << " ! *" << std::endl;
}

