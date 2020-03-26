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
    	Fixed(void);
    	~Fixed(void);
    	Fixed(const Fixed &f);
        Fixed(const int value);
        Fixed(const float value);
        Fixed  &operator=(const Fixed& f);
    	int    getRawBits(void) const;
   		void   setRawBits(int const raw);
        int    toInt(void) const;
        float  toFloat(void) const;

};

std::ostream &operator<<(std::ostream &out, Fixed const &val);

#endif