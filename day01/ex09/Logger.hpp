#ifndef DEF_LOGGER_HPP
# define DEF_LOGGER_HPP

#include <string>
#include <iostream>
#include <fstream>
#include <time.h>

class Logger
{
    private:
    	std::string _file;
        void logToConsole(std::string const & log);
        void logToFile(std::string const & log);
        std::string makeLogEntry(std::string const & log);
    public:
    	Logger(void);
    	Logger(std::string file);
        void log(std::string const &dest, std::string const &message);
};

#endif