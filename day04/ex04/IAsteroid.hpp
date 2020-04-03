#ifndef IASTEROID_HPP
# define IASTEROID_HPP

#include <iostream>
#include <string>
#include <sstream>
// #include "IMiningLaser.hpp"
//#include "StripMiner.hpp"

//class IMiningLaser;
class DeepCoreMiner;
class StripMiner;

class IAsteroid
{
	protected:
		std::string _name;
	public:
		virtual ~IAsteroid() {}
		virtual std::string beMined(DeepCoreMiner *) const = 0;
		virtual std::string beMined(StripMiner *) const = 0;
		virtual std::string getName() const = 0;
};

#endif