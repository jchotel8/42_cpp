#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>
#include <sstream>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
    public:

    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm &f);
    RobotomyRequestForm& operator=(const RobotomyRequestForm &f);
    ~RobotomyRequestForm(void);

    //GETTERS
    //SETTERS
    //OTHERS
    void        beExecuted();

    private:
};

#endif