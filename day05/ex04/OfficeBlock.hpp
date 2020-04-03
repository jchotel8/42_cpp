#ifndef OFFICEBLOCK_HPP
# define OFFICEBLOCK_HPP

#include <iostream>
#include <string>
#include <sstream>
# include <exception>

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Form;
class ShrubberyCreationForm;
class RobotomyRequestForm;
class PresidentialPardonForm;

class OfficeBlock
{
    public:

    OfficeBlock();
    OfficeBlock(Intern intern, Bureaucrat signer, Bureaucrat executor);
    ~OfficeBlock(void);

    //GETTERS
    Intern      *getIntern() const;
    Bureaucrat  *getSigner() const;
    Bureaucrat  *getExecutor() const;
    //SETTERS
    void        setIntern(Intern intern);
    void        setSigner(Bureaucrat signer);
    void        setExecutor(Bureaucrat executor);
    //OTHERS
    void        doBureaucracy(std::string, std::string);

    class MissingEmployeeException : public std::exception
    {
        public:
            MissingEmployeeException();
            MissingEmployeeException(const MissingEmployeeException &m);
            MissingEmployeeException& operator=(const MissingEmployeeException &m);
            ~MissingEmployeeException(void) throw();
            char const *what(void) const throw();
    };

    protected:
    Intern      *_intern;
    Bureaucrat  *_signer;
    Bureaucrat  *_executor;
};

#endif