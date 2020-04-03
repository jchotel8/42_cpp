#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

#include <iostream>
#include <string>
#include <sstream>
#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
    public:

    AssaultTerminator (const AssaultTerminator&);
    AssaultTerminator ();
    ~AssaultTerminator(void);
    AssaultTerminator &operator=(const AssaultTerminator&);

    //GETTERS

    //SETTERS

    //OTHERS
    ISpaceMarine    *clone() const;
    void            battleCry() const;
    void            rangedAttack() const;
    void            meleeAttack() const;

    protected:
};

#endif