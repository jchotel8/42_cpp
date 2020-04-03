#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <sstream>
# include <exception>

class Bureaucrat
{
    public:

    Bureaucrat(std::string name, int grade);
    Bureaucrat(std::string name);
    Bureaucrat(const Bureaucrat &m);
    Bureaucrat& operator=(const Bureaucrat &m);
    ~Bureaucrat(void);

    //GETTERS
    std::string getName() const;
    int         getGrade() const;
    //SETTERS
    void        setName(std::string name);
    void        setGrade(int grade);
    //OTHERS
    void        incGrade(int amount);
    void        decGrade(int amount);
    void        incGrade();
    void        decGrade();

    class GradeTooLowException : public std::exception
    {
        public:
            GradeTooLowException();
            GradeTooLowException(const GradeTooLowException &m);
            GradeTooLowException& operator=(const GradeTooLowException &m);
            ~GradeTooLowException(void) throw();
            char const *what(void) const throw();
    };
    class GradeTooHighException : public std::exception
    {
        public:
            GradeTooHighException();
            GradeTooHighException(const GradeTooHighException &m);
            GradeTooHighException& operator=(const GradeTooHighException &m);
            ~GradeTooHighException(void) throw();
            char const *what(void) const throw();
    };

    protected:
    std::string _name;
    int         _grade;
};

std::ostream    &operator<<(std::ostream &out, const Bureaucrat &b);

#endif