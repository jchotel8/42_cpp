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
    std::string getTarget() const;
    //SETTERS
    void        setTarget(std::string target);
    //OTHERS
    void        beExecuted();

    private:
        std::string _target;
};

#endif