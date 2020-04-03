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

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(const TacticalMarine &tm)
{
	*this = tm;
}
TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for action!" << std::endl;
}
TacticalMarine::~TacticalMarine(void)
{
	std::cout << "Aaargh ..." << std::endl;
	return ;
}
TacticalMarine& TacticalMarine::operator=(const TacticalMarine& tm)
{
	return(*this);
}


//GETTERS

//SETTERS

//OTHER
void		TacticalMarine::battleCry() const
{
	std::cout << "For the Holy PLOT!" << std::endl;
}
void		TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}
void		TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}
ISpaceMarine *TacticalMarine::clone() const
{
	return new TacticalMarine;
}
