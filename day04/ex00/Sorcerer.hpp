#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include <string>
#include <sstream>
#include "Victim.hpp"
#include "Peon.hpp"

class Sorcerer
{
    public:

    Sorcerer(std::string name, std::string title);
    ~Sorcerer(void);
    //GETTERS
    std::string getName() const;
    std::string getTitle() const;
    //SETTERS
    void        setName(std::string name);
    void        setTitle(std::string title);
    //OTHERS
    void        polymorphed(Victim const &v);

    protected:
    std::string _name;
    std::string _title;
};

std::ostream    &operator<<(std::ostream &out, const Sorcerer &s);

#endif