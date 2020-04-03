#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include <string>
#include <sstream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    protected:
        std::string         _type; //Verifier const &
        unsigned int        _xp;
    public:
        //CONSTRUCTOR
        AMateria();
        AMateria(std::string const & type);
        AMateria(const AMateria &m);
        AMateria& operator=(const AMateria &m);
        ~AMateria();
        //GETTERS
        std::string const & getType() const;
        unsigned int        getXP() const;
        //SETTERS
        void                gainXP(int gain);
        virtual AMateria*   clone() const;
        virtual void        use(ICharacter& target);
};

#endif