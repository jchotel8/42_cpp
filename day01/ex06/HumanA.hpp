#ifndef DEF_HUMANA_HPP
# define DEF_HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
    public:

    HumanA(void);
    HumanA(std::string name);
    HumanA(std::string name, Weapon &weapon);
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