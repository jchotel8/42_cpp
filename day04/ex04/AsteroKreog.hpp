#ifndef ASTEROKREOG_HPP
# define ASTEROKREOG_HPP

#include <iostream>
#include <string>
#include <sstream>
#include "IAsteroid.hpp"

class AsteroKreog : public IAsteroid
{
    private:

    public:
        //CONSTRUCTOR
        AsteroKreog();
        AsteroKreog(const AsteroKreog &m);
        AsteroKreog& operator=(const AsteroKreog &m);
        ~AsteroKreog();
        //GETTERS
        std::string getName() const;
        //OTHERS
        std::string beMined(DeepCoreMiner *) const;
        std::string beMined(StripMiner *) const;
};

#endif