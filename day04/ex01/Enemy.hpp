#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>
#include <string>
#include <sstream>

class Enemy
{
    public:

    Enemy(int hp, std::string const & type);
    ~Enemy(void);

    //GETTERS
    std::string getType() const;
    int         getHP() const;
    //SETTERS
    void        setType(std::string type);
    void        setHP(int hp);
    //OTHERS
    virtual void    takeDamage(int amount);

    protected:
    std::string _type;
    int         _hp;
};

//std::ostream    &operator<<(std::ostream &out, const Sorcerer &s);

#endif