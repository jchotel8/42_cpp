#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>
#include <string>
#include <sstream>

class Victim
{
    public:
    Victim();
    Victim(std::string name);
    ~Victim(void);
    //GETTERS
    std::string getName() const;
    //SETTERS
    void        setName(std::string name);
    //OTHERS
    virtual void   getPolymorphed() const;

    protected:
    std::string _name;
};

std::ostream    &operator<<(std::ostream &out, const Victim &s);

#endif