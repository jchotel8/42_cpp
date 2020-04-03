#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include <sstream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:

    ScavTrap(void);
    ~ScavTrap(void);
    ScavTrap(std::string name);
    //GETTERS

    //SETTERS
    
    //OTHERS
    void challengeNewcomer(std::string const &target);


    private:
};

#endif