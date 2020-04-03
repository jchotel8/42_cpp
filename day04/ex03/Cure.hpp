#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include <string>
#include <sstream>
#include "AMateria.hpp"

class Cure : public AMateria
{
    private:

    public:
        //CONSTRUCTOR
        Cure();
        Cure(const Cure &m);
        Cure& operator=(const Cure &m);
        ~Cure();
        //GETTERS
        AMateria*   clone() const;
        void        use(ICharacter& target); 
};

#endif