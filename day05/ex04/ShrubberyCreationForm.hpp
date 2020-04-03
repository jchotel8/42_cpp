#ifndef SHRUBERRYCREATIONFORM_HPP
# define SHRUBERRYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
    public:

    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm &f);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm &f);
    ~ShrubberyCreationForm(void);

    //GETTERS
    //SETTERS
    //OTHERS
    void        beExecuted();

    private:
};

#endif