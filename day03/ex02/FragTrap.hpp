#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include <sstream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:

    FragTrap(void);
    ~FragTrap(void);
    FragTrap(std::string name);
    //GETTERS

    //SETTERS
    
    //OTHERS
    void attack1(std::string const &target);
    void attack2(std::string const &target);
    void vaulthunter_dot_exe(std::string const &target);

    private:
};

#endif