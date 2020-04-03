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

ScavTrap::ScavTrap(void)
{
	_name = "Woodchuck Chuck";
    _hitPoints = 100;
    _maxHitPoints = 100;
    _energyPoints = 50;
    _maxEnergyPoints = 50;
    _level = 1;
    _meleeAttackDamage = 20;
    _rangedAttackDamage = 15;
    _armorDamageReduction = 3;
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
    _hitPoints = 100;
    _maxHitPoints = 100;
    _energyPoints = 50;
    _maxEnergyPoints = 50;
    _level = 1;
    _meleeAttackDamage = 20;
    _rangedAttackDamage = 15;
    _armorDamageReduction = 3;
    print();
}

void ScavTrap::print()
{
	std::ostringstream print;
	print << "SC4V-TP [" << _name << "]\n";
	print << "-------------------------\n";
	print << "hP : " << _hitPoints << "/" << _maxHitPoints << "\n";
	print << "eP : " << _energyPoints << "/" << _maxEnergyPoints << "\n";
	print << "level : " << _level << "\n";
	print << "melee : " << _meleeAttackDamage << "\t";
	print << "ranged : " << _rangedAttackDamage << "\n";
	print << "armor : " << _armorDamageReduction << "\n";
	std::cout << print.str() << std::endl;
}

void ScavTrap::rangedAttack(std::string const &target)
{
	std::ostringstream action;
	action << "SC4V-TP [" << _name << "] attaque [" << target;
	action << "] à distance, causant " << _rangedAttackDamage;
	action << " points de dégâts !";
	std::cout << action.str() << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target)
{
	std::ostringstream action;
	action << "SC4V-TP [" << _name << "] attaque [" << target;
	action << "] au contact, causant " << _meleeAttackDamage;
	action << " points de dégâts !";
	std::cout << action.str() << std::endl;
}
void ScavTrap::takeDamage(unsigned int amount)
{
	_energyPoints -= amount / _armorDamageReduction;
	if (_energyPoints < 0)
		_energyPoints = 0;
	if (_armorDamageReduction > 1)
		_armorDamageReduction--;
	std::ostringstream action;
	action << "SC4V-TP [" << _name << "] recoit " << amount;
	action << " dégâts. EnergyPoints = ";
	action << _energyPoints;
	action << " ArmorDamageReduction = " << _armorDamageReduction;
	std::cout << action.str() << std::endl;
}
void ScavTrap::beRepaired(unsigned int amount)
{
	_energyPoints += amount;
	if (_energyPoints > _maxEnergyPoints)
		_energyPoints = _maxEnergyPoints;
	std::ostringstream action;
	action << "SC4V-TP [" << _name << "] est réparée. EnergyPoints = ";
	action << _energyPoints;
	std::cout << action.str() << std::endl;
}

void ScavTrap::challengeNewcomer(std::string const &target)
{
	if (_energyPoints >= 5)
	{
		_energyPoints -= 5;
		std::cout << "SC4V-TP [" << _name << "] is challenging a [" << target << "] ...";
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
		std::cout << "SC4V-TP [" << _name << "] is out of battery" << std::endl;

}
