#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include <string>
#include <sstream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
    private:
        std::string _name;
        AMateria        *_potion[4];
    public:
        Character();
        Character(std::string name);
        Character(const Character &c);
        ~Character(void);
        Character& operator=(const Character& m);
        //GETTERS
        std::string const &getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};


#endif