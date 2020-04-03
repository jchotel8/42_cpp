#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

#include <iostream>
#include <string>
#include <sstream>
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
    public:

    TacticalMarine (const TacticalMarine&);
    TacticalMarine ();
    ~TacticalMarine(void);
    TacticalMarine &operator=(const TacticalMarine&);

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