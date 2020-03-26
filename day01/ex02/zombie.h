#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <cctype>
#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>

class Zombie
{
    public:

    Zombie(void);
    ~Zombie(void);
    Zombie(std::string name, std::string type);
        //GETTERS
    std::string get_name();
    std::string get_type();
    //SETTERS
    void set_name(std::string name);
    void set_type(std::string type);
    //OTHERS
    std::string print();
    void advert();
    void announce();

    private:
    std::string _name;
    std::string _type;
};

#endif