#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>
#include <string>
#include <sstream>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *_materia[4];

    public:
        //CONSTRUCTOR
        MateriaSource();
        MateriaSource(const MateriaSource &m);
        MateriaSource& operator=(const MateriaSource &m);
        ~MateriaSource();
        //GETTERS
        //OTHERS
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);

};

#endif