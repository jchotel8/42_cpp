#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <sstream>

class ClapTrap
{
    public:

    ClapTrap(void);
    ~ClapTrap(void);
    ClapTrap(std::string name);
    //GETTERS

    //SETTERS
    
    //OTHERS
    void print();
    void rangedAttack(std::string const &target);
    void meleeAttack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    protected:
    std::string _name;
    int         _hitPoints;
    int         _maxHitPoints;
    int         _energyPoints;
    int         _maxEnergyPoints;
    int         _level;
    int         _meleeAttackDamage;
    int         _rangedAttackDamage;
    int         _armorDamageReduction;
    std::string _type;
};

#endif