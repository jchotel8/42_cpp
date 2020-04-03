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

#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50)
{
	_output = "* pschhh... SBAM! *";
}

PowerFist::~PowerFist(void)
{
	std::cout << "PowerFist destroyed" << std::endl;
	return ;
}



// std::ostream	&operator<<(std::ostream &out, const Victim &v)
// {
// 	out << "I am "<< v.getName() <<" and i like otters!" << std::endl;
// 	return (out);
// }
