#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>
#include <string>
#include <sstream>

class AWeapon
{
    public:

    AWeapon(std::string const & name, int apcost, int damage);
    AWeapon (const AWeapon&);
    AWeapon ();
    ~AWeapon(void);
    AWeapon &operator=(const AWeapon&);

    //GETTERS
    std::string getName() const;
    int         getAPCost() const;
    int         getDamage() const;
    //SETTERS
    void        setName(std::string name);
    void        setAPCost(int apcost);
    void        setDamage(int damage);
    //OTHERS
    virtual void        attack() const;// = 0;

    protected:
    std::string _name;
    int         _apcost;
    int         _damage;
    std::string _output;
};

//std::ostream    &operator<<(std::ostream &out, const Sorcerer &s);

#endif