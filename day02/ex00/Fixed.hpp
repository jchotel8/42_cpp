#ifndef DEF_FIXED_HPP
# define DEF_FIXED_HPP

#include <string>
#include <iostream>
#include <fstream>
#include <time.h>

class Fixed
{
    private:
    	int _pf;
    	static const int nbits;
    public:
    	Fixed(void);
    	~Fixed(void);
    	Fixed(const Fixed &f);
    	Fixed &operator=(const Fixed& f);
    	int getRawBits(void) const;
   		void setRawBits(int const raw);
};

#endif