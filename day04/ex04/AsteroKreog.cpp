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

#include "AsteroKreog.hpp"

AsteroKreog::AsteroKreog()
{
	_name = "AsteroKreog";
	std::cout << "["<< _name <<"] * pfffffff * - a new asteroid appeared" <<std::endl;
}

AsteroKreog::AsteroKreog(const AsteroKreog &m)
{
	*this = m;
}

AsteroKreog::~AsteroKreog(void)
{
	return ;
}

AsteroKreog& AsteroKreog::operator=(const AsteroKreog& m)
{
	_name = m._name;
	return(*this);
}


//GETTERS
std::string AsteroKreog::getName() const
{
	return(_name);
}

//SETTERS


//OTHER
std::string AsteroKreog::beMined(DeepCoreMiner* m) const
{
	(void) m;
	return ("Dragonite");
}

std::string AsteroKreog::beMined(StripMiner* m) const
{
	(void) m;
	return ("Flavium");
}

