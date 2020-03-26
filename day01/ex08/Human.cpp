/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchotel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 05:54:59 by jchotel           #+#    #+#             */
/*   Updated: 2020/03/12 08:01:05 by jchotel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

//OTHERS
void Human::meleeAttack(std::string const & target)
{
	std::cout << "MeleeAttacks on " << target << std::endl;
}

void Human::rangedAttack(std::string const & target)
{
	std::cout << "RangedAttacks on " << target << std::endl;
}

void Human::intimidatingShout(std::string const & target)
{
	std::cout <<  "Scraming ARRRRRRGHHH at " << target << std::endl;
}

void Human::action(std::string const &action_name, std::string const &target)
{
	void  (Human::*action[])(std::string const &) =
	{
		&Human::meleeAttack,
		&Human::rangedAttack,
		&Human::intimidatingShout
	};
	std::string cmd[] =
	{
		"meleeAttack",
		"rangedAttack",
		"intimidatingShout"
	};
	for (int i = 0; i < 3; i++)
	{
		if(!action_name.compare(cmd[i]))
			(this->*action[i])(target);
	}
}