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

#include "Victim.hpp"

Victim::Victim(void)
{
	std::cout << "A random victim called " << _name << " just appeared!" << std::endl;
}

Victim::Victim(std::string name)
{
	_name = name;
    std::cout << "A random victim called " << _name << " just appeared!" << std::endl;
}

Victim::~Victim(void)
{
	std::cout << "The victim " << _name <<" died for no apparent reasons!" << std::endl;
	return ;
}

std::string Victim::getName() const
{
	return (_name);
}

void 		Victim::setName(std::string name)
{
	_name = name;
}

void 		Victim::getPolymorphed() const
{
	std::cout << _name <<" was just polymorphed in a cute little sheep!" << std::endl;
}


std::ostream	&operator<<(std::ostream &out, const Victim &v)
{
	out << "I am "<< v.getName() <<" and i like otters!" << std::endl;
	return (out);
}
