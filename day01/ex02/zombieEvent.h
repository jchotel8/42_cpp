#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include "zombie.h"
#include <cstdlib>
#include <ctime>

class ZombieEvent
{
    public:

    ZombieEvent(void);
    ZombieEvent(std::string _type);
    //GETTERS
    std::string getZombieType();
    //SETTERS
    void        setZombieType(std::string type);
    //OTHERS
    Zombie      *newZombie (std::string name);
    Zombie      *randomChump();

    private:
    std::string _type;
};

#endif