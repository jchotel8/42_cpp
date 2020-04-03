#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include <iostream>
#include <string>
#include <sstream>
#include "ClapTrap.hpp"

class NinjaTrap : public ClapTrap
{
    public:

    NinjaTrap(void);
    ~NinjaTrap(void);
    NinjaTrap(std::string name);
    //GETTERS

    //SETTERS
    
    //OTHERS
    void ninjaShoebox(NinjaTrap &target);
    void ninjaShoebox(ClapTrap &target);
    void ninjaShoebox(FragTrap &target);
    void ninjaShoebox(ScavTrap &target);


    private:
};

#endif