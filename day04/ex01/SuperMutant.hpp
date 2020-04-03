#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include <iostream>
#include <string>
#include <sstream>
#include "Enemy.hpp"

class SuperMutant : public Enemy
{
    public:
    SuperMutant();
    ~SuperMutant(void);
    //GETTERS

    //SETTERS

    //OTHERS
    virtual void    takeDamage(int amount);

    protected:
};

//std::ostream    &operator<<(std::ostream &out, const Victim &s);

#endif