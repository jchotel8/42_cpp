#ifndef PEON_HPP
# define PEON_HPP

#include <iostream>
#include <string>
#include <sstream>
#include "Victim.hpp"

class Peon : public Victim
{
    public:
        Peon(std::string name);
        ~Peon(void);
        //GETTERS

        //SETTERS

        //OTHERS
        virtual void        getPolymorphed() const;
    private:
};

//std::ostream    &operator<<(std::ostream &out, const Victim &s);

#endif