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

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(const AssaultTerminator &tm)
{
	*this = tm;
}
AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *" << std::endl;
}
AssaultTerminator::~AssaultTerminator(void)
{
	std::cout << "I’ll be back ..." << std::endl;
	return ;
}
AssaultTerminator& AssaultTerminator::operator=(const AssaultTerminator& tm)
{
	return(*this);
}


//GETTERS

//SETTERS

//OTHER
void		AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. Purify it !" << std::endl;
}
void		AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}
void		AssaultTerminator::meleeAttack() const
{
	std::cout << "* attaque with chainfists *" << std::endl;
}
ISpaceMarine *AssaultTerminator::clone() const
{
	return new AssaultTerminator;
}
