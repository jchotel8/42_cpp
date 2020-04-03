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

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(void)
{
	_name = "fraggy";
	_type = "FR4G-TP";
    _energyPoints = 100;
    _maxEnergyPoints = 100;
    _meleeAttackDamage = 30;
    _rangedAttackDamage = 20;
    _armorDamageReduction = 5;
    print();
}

FragTrap::~FragTrap(void)
{
	std::cout << "FR4G-TP [" << _name << "] is destroyed." << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name)
{
	_name = name;
	_type = "FR4G-TP";
	_energyPoints = 100;
    _maxEnergyPoints = 100;
    _meleeAttackDamage = 30;
    _rangedAttackDamage = 20;
    _armorDamageReduction = 5;
    print();
}

void FragTrap::attack1(std::string const &target)
{
	std::ostringstream action;
	action << "FR4G-TP [" << _name << "] attaque [" << target;
	action << "] 1, causant " << _meleeAttackDamage;
	action << " points de dégâts !";
	std::cout << action.str() << std::endl;
}
void FragTrap::attack2(std::string const &target)
{
	std::ostringstream action;
	action << _type << " [" << _name << "] attaque [" << target;
	action << "] 2, causant " << _rangedAttackDamage;
	action << " points de dégâts !";
	std::cout << action.str() << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (_energyPoints >= 25)
	{
		_energyPoints -= 25;
		std::cout << _type << " [" << _name << "] is doing something random ... ";
		std::cout << "EnergyPoints = " << _energyPoints << std::endl;
		void (FragTrap::*ptr[])(std::string const &) = {
			&FragTrap::attack1,
			&FragTrap::attack2
		};
		int i = rand() % 2;
		(this->*ptr[i])(target);
	}
	else
		std::cout << _type << " [" << _name << "] is out of battery" << std::endl;

}
