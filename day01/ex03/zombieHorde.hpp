#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "zombie.hpp"
#include <iostream>
#include <string>

class ZombieHorde
{
    public:

    ZombieHorde(void);
    ZombieHorde(int n);
    //GETTERS
    int         get_number();
    //SETTERS
    void        set_number(int n);
    //OTHERS
    Zombie      *randomChump();
    void        announce();

    private:
    int         _n;
    Zombie      *zombies;
};

#endif