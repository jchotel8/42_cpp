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

#include "DeepCoreMiner.hpp"

DeepCoreMiner::DeepCoreMiner()
{
	std::cout << "* mine deepdeep *" << std::endl;
}

DeepCoreMiner::DeepCoreMiner(const DeepCoreMiner &m)
{
	*this = m;
}

DeepCoreMiner::~DeepCoreMiner(void)
{}

DeepCoreMiner& DeepCoreMiner::operator=(const DeepCoreMiner& m)
{
	//_xp = m._xp;
	return(*this);
}


//GETTERS


//SETTERS


//OTHER
void DeepCoreMiner::mine(IAsteroid* a)
{
	std::cout << "* mining deep ... got " << a->beMined(this) << " ! *" << std::endl;
}

