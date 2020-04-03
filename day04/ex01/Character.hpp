#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include <string>
#include <sstream>
#include "Enemy.hpp"
#include "AWeapon.hpp"


class Character
{
    public:

    Character(std::string const & name);
    ~Character(void);

    //GETTERS
    std::string getName() const;
    int         getAP() const;
    AWeapon     *getWeapon() const;
    //SETTERS
    void        setName(std::string name);
    void        setAP(int ap);
    //OTHERS
    void        equip(AWeapon* w);
    void        recoverAP();
    void        attack(Enemy*);

    protected:
    std::string _name;
    int         _ap;
    AWeapon     *_weapon;
};

std::ostream    &operator<<(std::ostream &out, const Character &c);

#endif