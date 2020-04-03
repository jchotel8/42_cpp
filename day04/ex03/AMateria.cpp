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

#include "AMateria.hpp"

AMateria::AMateria()
{
	_type = "none";
	_xp = 0;
}

AMateria::AMateria(std::string const & type)
{
	_type = type;
	_xp = 0;
}

AMateria::AMateria(const AMateria &m)
{
	*this = m;
}

AMateria::~AMateria(void)
{
	return ;
}

AMateria& AMateria::operator=(const AMateria& m)
{
	_type = m._type;
	return(*this);
}


//GETTERS
std::string const &AMateria::getType() const
{
	return (_type);
}
unsigned int AMateria::getXP() const
{
	return (_xp);
}


//SETTERS
// void		AMateria::gainXP(int gain)
// {
// 	_xp += gain;
// }

//OTHER
AMateria*   AMateria::clone() const
{
	return new AMateria(_type);
}
void        AMateria::use(ICharacter& target)
{
	_xp += 10;
	std::cout << "* using " << _type << " on " << target.getName() << " *" << std::endl;
}

