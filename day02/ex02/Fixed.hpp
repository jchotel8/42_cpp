#ifndef DEF_FIXED_HPP
# define DEF_FIXED_HPP

#include <string>
#include <iostream>
#include <fstream>
#include <time.h>
#include <cmath>

class Fixed
{
    private:
    	int _pf;
    	static const int nbits;
        
    public:
        //CREATORS
    	Fixed(void);
    	~Fixed(void);
    	Fixed(const Fixed &f);
        Fixed(const int value);
        Fixed(const float value);
        //OPERATORS
        Fixed  &operator=(const Fixed &f);
        bool   operator<(const Fixed &f) const;
        bool   operator>(const Fixed &f) const;
        bool   operator<=(const Fixed& f) const;
        bool   operator>=(const Fixed& f) const;
        bool   operator==(const Fixed& f) const;
        bool   operator!=(const Fixed& f) const;
        Fixed  operator+(const Fixed &f) const;
        Fixed  operator-(const Fixed &f) const;
        Fixed  operator*(const Fixed &f) const;
        Fixed  operator/(const Fixed &f) const;
        Fixed  &operator++(void);  //pre-incrementation
        Fixed  operator++(int);    //post-incrementation
        Fixed  &operator--(void);  //pre-decrementation
        Fixed  operator--(int);   //post-decrementation
        static const Fixed  &min(const Fixed &f1, const Fixed &f2);
        static const Fixed  &max(const Fixed &f1, const Fixed &f2);
        static Fixed  &min(Fixed &f1, Fixed &f2);
        static Fixed  &max(Fixed &f1, Fixed &f2);
        //GETTERS & SETTERS
    	int    getRawBits(void) const;
   		void   setRawBits(int const raw);
        //OTHER
        int    toInt(void) const;
        float  toFloat(void) const;

};

const Fixed  &min(const Fixed &f1, const Fixed &f2);
const Fixed  &max(const Fixed &f1, const Fixed &f2);
std::ostream &operator<<(std::ostream &out, Fixed const &val);

#endif