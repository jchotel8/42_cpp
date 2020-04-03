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

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(void)
{
	_name = "scavvy";
    _type = "SC4V-TP";
    print();
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "SC4V-TP [" << _name << "] is destroyed." << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name)
{
	_name = name;
    _type = "SC4V-TP";
    print();
}

void ScavTrap::challengeNewcomer(std::string const &target)
{
	if (_energyPoints >= 5)
	{
		_energyPoints -= 5;
		std::cout << _type <<" [" << _name << "] is challenging a [" << target << "] ...";
		std::cout << " EnergyPoints = " << _energyPoints << std::endl;
		std::string challenges[] = {
			"challenge 1",
			"challenge 2",
			"challenge 3",
			"challenge 4",
			"challenge 5",
			"challenge 6",
			"challenge 7",
			"challenge 8",
			"challenge 9",
		};
		int i = rand() % 9;
		std::cout << challenges[i] << std::endl;
	}
	else
		std::cout << _type <<" [" << _name << "] is out of battery" << std::endl;

}
