#ifndef DEF_WEAPON_HPP
#define DEF_WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
    public:

    Weapon(void);
    Weapon(std::string type);
    Weapon(std::string type, int damage);
    //GETTERS
    std::string getType();
    int         get_damage();
    //SETTERS
    void setType(std::string name);
    void set_damage(int damage);
    //OTHERS

    private:
    std::string _type;
    int         _damage;
};

#endif