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

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title)
{
	_name = name;
    _title = title;
    std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << _name << ", " << _title << ", is dead.";
	std::cout << " Consequences will never be the same!" << std::endl;
	return ;
}

std::string Sorcerer::getName() const
{
	return (_name);
}

std::string Sorcerer::getTitle() const
{
	return (_title);
}

void 		Sorcerer::setName(std::string name)
{
	_name = name;
}

void 		Sorcerer::setTitle(std::string title)
{
	_title = title;
}

void		Sorcerer::polymorphed(Victim const &v)
{
	v.getPolymorphed();
}

std::ostream	&operator<<(std::ostream &out, const Sorcerer &s)
{
	out << "I am "<< s.getName() << ", " << s.getTitle() <<", and i like ponies!" << std::endl;
	return (out);
}
