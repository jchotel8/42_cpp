#ifndef IMININGLASER_HPP
# define IMININGLASER_HPP

#include <iostream>
#include <string>
#include <sstream>
#include "IAsteroid.hpp"

//class IAsteroid;

class IMiningLaser
{
	public:
		virtual ~IMiningLaser() {}
		virtual void mine(IAsteroid*) = 0;
};

#endif