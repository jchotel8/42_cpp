#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <string>
# include <iostream>
# include "Zombie.hpp"

class ZombieHorde
{
public:
    ZombieHorde(int);
    ZombieHorde(void);
    ~ZombieHorde(void);
    void        announce(void);
    std::string randomChump(void);

private:
    Zombie      *_zombie;
    int         _number;
};

#endif