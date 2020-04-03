#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include <sstream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    public:

    Form(std::string name, int gradeS, int gradeE);
    Form(std::string name);
    Form(const Form &f);
    Form& operator=(const Form &f);
    ~Form(void);
    void print();

    //GETTERS
    std::string getName() const;
    bool        getSigned() const;
    int         getGradeE() const;
    int         getGradeS() const;
    //SETTERS
    void        setName(std::string name);
    void        setSigned(bool sign);
    void        setGradeS(int grade);
    void        setGradeE(int grade);
    //OTHERS
    void        beSigned(Bureaucrat *);
    void        execute(Bureaucrat const&);
    virtual void     beExecuted();

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
    class NotSignedException : public std::exception
    {
        public:
            NotSignedException();
            NotSignedException(const NotSignedException &m);
            NotSignedException& operator=(const NotSignedException &m);
            ~NotSignedException(void) throw();
            char const *what(void) const throw();
    };

    private:
    std::string _name;
    int         _gradeS;
    int         _gradeE;
    bool        _signed;
};

std::ostream    &operator<<(std::ostream &out, const Form &b);

#endif