#ifndef KOALASTEROID_HPP
# define KOALASTEROID_HPP

#include <iostream>
#include <string>
#include <sstream>
#include "IAsteroid.hpp"

class KoalaSteroid : public IAsteroid
{
    private:

    public:
        //CONSTRUCTOR
        KoalaSteroid();
        KoalaSteroid(const KoalaSteroid &m);
        KoalaSteroid& operator=(const KoalaSteroid &m);
        ~KoalaSteroid();
        //GETTERS
        std::string getName() const;
        //OTHERS
        std::string beMined(DeepCoreMiner *) const;
        std::string beMined(StripMiner *) const;
};

#endif