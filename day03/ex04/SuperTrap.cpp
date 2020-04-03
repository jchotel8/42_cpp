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

#include "SuperTrap.hpp"


SuperTrap::SuperTrap(void)
{
	_name = "supy";
    _type = "SUP3-TP";
    _hitPoints = 100;
    _maxHitPoints = 100;
    _energyPoints = 120;
    _maxEnergyPoints = 120;
    _meleeAttackDamage = 60;
    _rangedAttackDamage = 20;
    _armorDamageReduction = 0;
    print();
}

SuperTrap::~SuperTrap(void)
{
	std::cout << _type << " [" << _name << "] is destroyed." << std::endl;
	return ;
}

SuperTrap::SuperTrap(std::string name)
{
	_name = name;
    _type = "SUP3-TP";
    _hitPoints = 100;
    _maxHitPoints = 100;
    _energyPoints = 120;
    _maxEnergyPoints = 120;
    _meleeAttackDamage = 60;
    _rangedAttackDamage = 20;
    _armorDamageReduction = 0;
    ClapTrap::print();
}


void SuperTrap::meleeAttack(std::string const &target)
{
	FragTrap::meleeAttack(target);
}
void SuperTrap::rangedAttack(std::string const &target)
{
	NinjaTrap::rangedAttack(target);

}


