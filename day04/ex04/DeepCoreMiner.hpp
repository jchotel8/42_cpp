#ifndef DEEPCOREMINER_HPP
# define DEEPCOREMINER_HPP

#include <iostream>
#include <string>
#include <sstream>
#include "IMiningLaser.hpp"
#include "IAsteroid.hpp"

class DeepCoreMiner : public IMiningLaser
{
    private:

    public:
        //CONSTRUCTOR
        DeepCoreMiner();
        DeepCoreMiner(const DeepCoreMiner &m);
        DeepCoreMiner& operator=(const DeepCoreMiner &m);
        ~DeepCoreMiner();
        //GETTERS
        //OTHER
        void mine(IAsteroid*);
};

#endif