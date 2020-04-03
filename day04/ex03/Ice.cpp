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

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{}

Ice::Ice(const Ice &m)
{
	*this = m;
}

Ice::~Ice(void)
{
	return ;
}

Ice& Ice::operator=(const Ice& m)
{
	_xp = m._xp;
	return(*this);
}


//GETTERS


//SETTERS


//OTHER
AMateria*   Ice::clone() const
{
	return new Ice();
}
void        Ice::use(ICharacter& target)
{
	_xp += 10;
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

