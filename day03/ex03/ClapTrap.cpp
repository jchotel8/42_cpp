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

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	_name = "init";
    _hitPoints = 100;
    _maxHitPoints = 100;
    _energyPoints = 50;
    _maxEnergyPoints = 50;
    _level = 1;
    _meleeAttackDamage = 20;
    _rangedAttackDamage = 15;
    _armorDamageReduction = 3;
    _type = "ClapTrap";
    std::cout << "a new ClapTrap is init" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap [" << _name << "] is destroyed." << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name)
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
    _type = "ClapTrap";
}

std::string ClapTrap::getName()
{
	return (_name);
}

std::string ClapTrap::getType()
{
	return (_type);
}

void ClapTrap::print()
{
	std::ostringstream print;
	print << "-------------------------\n";
	print << "."<<_type << " [" << _name << "]\n";
	print << ".hP : " << _hitPoints << "/" << _maxHitPoints << "\n";
	print << ".eP : " << _energyPoints << "/" << _maxEnergyPoints << "\n";
	print << ".level : " << _level << "\n";
	print << ".melee : " << _meleeAttackDamage << "\t";
	print << "ranged : " << _rangedAttackDamage << "\n";
	print << ".armor : " << _armorDamageReduction << "\n";
	print << "-------------------------\n";
	std::cout << print.str();
}

void ClapTrap::rangedAttack(std::string const &target)
{
	std::ostringstream action;
	action << _type << " [" << _name << "] attaque [" << target;
	action << "] à distance, causant " << _rangedAttackDamage;
	action << " points de dégâts !";
	std::cout << action.str() << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target)
{
	std::ostringstream action;
	action << _type << " [" << _name << "] attaque [" << target;
	action << "] au contact, causant " << _meleeAttackDamage;
	action << " points de dégâts !";
	std::cout << action.str() << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (_armorDamageReduction > 0)
		_energyPoints -= amount / _armorDamageReduction;
	else
		_energyPoints -= amount;
	if (_energyPoints < 0)
		_energyPoints = 0;
	if (_armorDamageReduction > 1)
		_armorDamageReduction--;
	std::ostringstream action;
	action << _type << " [" << _name << "] recoit " << amount;
	action << " dégâts. EnergyPoints = ";
	action << _energyPoints;
	action << " ArmorDamageReduction = " << _armorDamageReduction;
	std::cout << action.str() << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	_energyPoints += amount;
	if (_energyPoints > _maxEnergyPoints)
		_energyPoints = _maxEnergyPoints;
	std::ostringstream action;
	action << _type << " [" << _name << "] est réparée. EnergyPoints = ";
	action << _energyPoints;
	std::cout << action.str() << std::endl;
}
