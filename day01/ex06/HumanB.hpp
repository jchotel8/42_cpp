#ifndef DEF_HUMANB_HPP
# define DEF_HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    public:

    HumanB(void);
    HumanB(std::string name);
    HumanB(std::string name, Weapon &weapon);
    //GETTERS
    std::string get_name();
    Weapon      &get_weapon();
    //SETTERS
    void set_name(std::string name);
    void setWeapon(Weapon &weapon);
    //OTHERS
    void attack(void);

    private:
    std::string _name;
    Weapon* _weapon;
};

#endif