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

FragTrap::FragTrap(void)
{
	_name = "nikeAirForce box";
    _hitPoints = 100;
    _maxHitPoints = 100;
    _energyPoints = 100;
    _maxEnergyPoints = 100;
    _level = 1;
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
    _hitPoints = 100;
    _maxHitPoints = 100;
    _energyPoints = 100;
    _maxEnergyPoints = 100;
    _level = 1;
    _meleeAttackDamage = 30;
    _rangedAttackDamage = 20;
    _armorDamageReduction = 5;
    print();
}

void FragTrap::print()
{
	std::ostringstream print;
	print << "FR4G-TP [" << _name << "]\n";
	print << "-------------------------\n";
	print << "hP : " << _hitPoints << "/" << _maxHitPoints << "\n";
	print << "eP : " << _energyPoints << "/" << _maxEnergyPoints << "\n";
	print << "level : " << _level << "\n";
	print << "melee : " << _meleeAttackDamage << "\t";
	print << "ranged : " << _rangedAttackDamage << "\n";
	print << "armor : " << _armorDamageReduction << "\n";
	std::cout << print.str() << std::endl;
}

void FragTrap::rangedAttack(std::string const &target)
{
	std::ostringstream action;
	action << "FR4G-TP [" << _name << "] attaque [" << target;
	action << "] à distance, causant " << _rangedAttackDamage;
	action << " points de dégâts !";
	std::cout << action.str() << std::endl;
}

void FragTrap::meleeAttack(std::string const &target)
{
	std::ostringstream action;
	action << "FR4G-TP [" << _name << "] attaque [" << target;
	action << "] au contact, causant " << _meleeAttackDamage;
	action << " points de dégâts !";
	std::cout << action.str() << std::endl;
}
void FragTrap::takeDamage(unsigned int amount)
{
	_energyPoints -= amount / _armorDamageReduction;
	if (_energyPoints < 0)
		_energyPoints = 0;
	if (_armorDamageReduction > 1)
		_armorDamageReduction--;
	std::ostringstream action;
	action << "FR4G-TP [" << _name << "] recoit " << amount;
	action << " dégâts. EnergyPoints = ";
	action << _energyPoints;
	action << " ArmorDamageReduction = " << _armorDamageReduction;
	std::cout << action.str() << std::endl;
}
void FragTrap::beRepaired(unsigned int amount)
{
	_energyPoints += amount;
	if (_energyPoints > _maxEnergyPoints)
		_energyPoints = _maxEnergyPoints;
	std::ostringstream action;
	action << "FR4G-TP [" << _name << "] est réparée. EnergyPoints = ";
	action << _energyPoints;
	std::cout << action.str() << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (_energyPoints >= 25)
	{
		_energyPoints -= 25;
		std::cout << "FR4G-TP [" << _name << "] is doing something random ... ";
		std::cout << "EnergyPoints = " << _energyPoints << std::endl;
		void (FragTrap::*ptr[])(std::string const &) = {
			&FragTrap::rangedAttack,
			&FragTrap::meleeAttack
		};
		int i = rand() % 2;
		(this->*ptr[i])(target);
	}
	else
		std::cout << "FR4G-TP " << _name << " is out of battery" << std::endl;

}
