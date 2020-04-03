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
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void)
{
	_name = "ninjy";
    _type = "N!nja-TP";
    _hitPoints = 60;
    _maxHitPoints = 60;
    _energyPoints = 120;
    _maxEnergyPoints = 120;
    _meleeAttackDamage = 60;
    _rangedAttackDamage = 5;
    _armorDamageReduction = 0;
    print();
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "N!nja-TP [" << _name << "] is destroyed." << std::endl;
	return ;
}

NinjaTrap::NinjaTrap(std::string name)
{
	_name = name;
    _type = "N!nja-TP";
    _hitPoints = 60;
    _maxHitPoints = 60;
    _energyPoints = 120;
    _maxEnergyPoints = 120;
    _meleeAttackDamage = 60;
    _rangedAttackDamage = 5;
    _armorDamageReduction = 0;
    print();
}


void NinjaTrap::ninjaShoebox(NinjaTrap &target)
{
	std::cout << _type << " [" << _name << "] ninja-attacks à distance";
	std::cout << target.getType() << " [" << target.getName() << "]!\n";
	target.takeDamage(_rangedAttackDamage);
}
void NinjaTrap::ninjaShoebox(ClapTrap &target)
{
	std::cout << _type << " [" << _name << "] ninja-attacks au contact";
	std::cout << target.getType() << " [" << target.getName() << "]!\n";
	target.takeDamage(_meleeAttackDamage);

}
void NinjaTrap::ninjaShoebox(FragTrap &target)
{
	std::cout << _type << " [" << _name << "] ninja-attacks au contact";
	std::cout << target.getType() << " [" << target.getName() << "]!\n";
	target.takeDamage(_meleeAttackDamage);
}
void NinjaTrap::ninjaShoebox(ScavTrap &target)
{
	std::cout << _type << " [" << _name << "] ninja-attacks au contact";
	std::cout << target.getType() << " [" << target.getName() << "]!\n";
	target.takeDamage(_meleeAttackDamage);
}



