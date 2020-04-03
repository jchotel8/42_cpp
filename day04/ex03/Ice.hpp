#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include <string>
#include <sstream>
#include "AMateria.hpp"

class Ice : public AMateria
{
    private:

    public:
        //CONSTRUCTOR
        Ice();
        Ice(const Ice &m);
        Ice& operator=(const Ice &m);
        ~Ice();
        //GETTERS
        AMateria*           clone() const;
        void                use(ICharacter& target); 
};

#endif