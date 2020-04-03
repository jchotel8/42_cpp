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

#include "Peon.hpp"

Peon::Peon(std::string name)
{
	_name = name;
    std::cout << "Zog Zog" << std::endl;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
	return ;
}

void 		Peon::getPolymorphed() const
{
	std::cout << _name <<" was just polymorphed into a pink pony!" << std::endl;
}


// std::ostream	&operator<<(std::ostream &out, const Victim &v)
// {
// 	out << "I am "<< v.getName() <<" and i like otters!" << std::endl;
// 	return (out);
// }
