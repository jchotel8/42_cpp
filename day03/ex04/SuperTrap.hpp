#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include <iostream>
#include <string>
#include <sstream>

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public virtual NinjaTrap, public virtual FragTrap
{
    public:

    SuperTrap(void);
    ~SuperTrap(void);
    SuperTrap(std::string name);
    //GETTERS

    //SETTERS
    
    //OTHERS
    void meleeAttack(std::string const &target);
    void rangedAttack(std::string const &target);


    private:
};

#endif