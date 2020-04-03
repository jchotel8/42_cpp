#ifndef MININGBARGE_HPP
# define MININGBARGE_HPP

#include <iostream>
#include <string>
#include <sstream>
#include "IAsteroid.hpp"
#include "IMiningLaser.hpp"

class MiningBarge
{
    protected:
        IMiningLaser *_miners[4];
    public:
        //CONSTRUCTOR
        MiningBarge();
        MiningBarge(const MiningBarge &m);
        MiningBarge& operator=(const MiningBarge &m);
        ~MiningBarge();
        //OTHER
        void equip(IMiningLaser*);
        void mine(IAsteroid*) const;
};

#endif