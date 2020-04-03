#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <exception>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
    public:

    Intern(void);
    Intern(const Intern &m);
    Intern& operator=(const Intern &m);
    ~Intern(void);

    //GETTERS
    //SETTERS
    //OTHERS
    Form     *makePPF(std::string target);
    Form     *makeRRF(std::string target);
    Form     *makeSCF(std::string target);
    Form     *makeForm(std::string name, std::string target);

    class InvalidFormExeption : public std::exception
    {
        public:
            InvalidFormExeption();
            InvalidFormExeption(const InvalidFormExeption &m);
            InvalidFormExeption& operator=(const InvalidFormExeption &m);
            ~InvalidFormExeption(void) throw();
            char const *what(void) const throw();
    };

    private:
};

#endif