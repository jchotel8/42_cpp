#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include <sstream>

class ScavTrap
{
    public:

    ScavTrap(void);
    ~ScavTrap(void);
    ScavTrap(std::string name);
    //GETTERS

    //SETTERS
    
    //OTHERS
    void print();
    void rangedAttack(std::string const &target);
    void meleeAttack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void challengeNewcomer(std::string const &target);


    private:
    std::string _name;
    int         _hitPoints;
    int         _maxHitPoints;
    int         _energyPoints;
    int         _maxEnergyPoints;
    int         _level;
    int         _meleeAttackDamage;
    int         _rangedAttackDamage;
    int         _armorDamageReduction;
};

#endif