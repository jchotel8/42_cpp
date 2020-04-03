#ifndef SQUAD_HPP
# define SQUAD_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <list>
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad : public ISquad
{
    public:

    Squad();
    ~Squad(void);

    //GETTERS
    int             getCount() const;
    ISpaceMarine*   getUnit(int) const;
    //SETTERS

    //OTHERS
    int             push(ISpaceMarine*);

    protected:
    //List<ISpaceMarine> _list = new List<ISpaceMarine>();
    typedef struct          s_unit {
        ISpaceMarine*       unit;
        s_unit*             next;
    }                       t_unit;
    t_unit                  *_list;
};  

//std::ostream    &operator<<(std::ostream &out, const Sorcerer &s);

#endif