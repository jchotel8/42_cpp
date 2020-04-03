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

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{}

Cure::Cure(const Cure &m)
{
	*this = m;
}

Cure::~Cure(void)
{
	return ;
}

Cure& Cure::operator=(const Cure& m)
{
	_xp = m._xp;
	return(*this);
}


//GETTERS


//SETTERS


//OTHER
AMateria*   Cure::clone() const
{
	return new Cure();
}
void        Cure::use(ICharacter& target)
{
	_xp += 10;
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

