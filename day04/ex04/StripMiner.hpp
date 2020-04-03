#ifndef STRIPMINER_HPP
# define STRIPMINER_HPP

#include <iostream>
#include <string>
#include <sstream>
#include "IMiningLaser.hpp"
#include "IAsteroid.hpp"

class StripMiner : public IMiningLaser
{
    private:

    public:
        //CONSTRUCTOR
        StripMiner();
        StripMiner(const StripMiner &m);
        StripMiner& operator=(const StripMiner &m);
        ~StripMiner();
        //GETTERS
        //OTHERS
        void mine(IAsteroid*);
};

#endif