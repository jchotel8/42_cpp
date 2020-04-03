#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>
#include <sstream>
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
    public:

    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(const PresidentialPardonForm &f);
    PresidentialPardonForm& operator=(const PresidentialPardonForm &f);
    ~PresidentialPardonForm(void);

    //GETTERS
    //SETTERS
    //OTHERS
    void        beExecuted();

    private:
};

#endif