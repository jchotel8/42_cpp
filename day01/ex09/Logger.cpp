/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchotel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 05:54:59 by jchotel           #+#    #+#             */
/*   Updated: 2020/03/12 08:01:05 by jchotel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

Logger::Logger(void)
{
	_file = "log";
}

Logger::Logger(std::string file)
{
	_file = file;
}

void Logger::logToConsole(std::string const &log)
{
	std::cout << makeLogEntry(log) << std::endl;
}

void Logger::logToFile(std::string const & log)
{
	std::ofstream	read;					//ouverture du fichier

	read.open(_file, std::ios_base::app);
	if (!read)//s'il n'existe pas
	{
		std::ifstream    out(_file);			//creation du fichier
		out.close();
		read.open(_file, std::ios_base::app);
	}
	read << makeLogEntry(log) << std::endl;
	read.close();
}

std::string Logger::makeLogEntry(std::string const & log)
{
	time_t theTime = time(NULL);
	struct tm *aTime = localtime(&theTime);

	int day = aTime->tm_mday;
	int month = aTime->tm_mon + 1; // Month is 0 – 11, add 1 to get a jan-dec 1-12 concept
	int year = aTime->tm_year + 1900; // Year is # years since 1900
	int hour=aTime->tm_hour;
	int min=aTime->tm_min;
	std::string date = std::to_string(day) + "/" + std::to_string(month) + "/"+ std::to_string(year);
	std::string time = std::to_string(hour) + ":" + std::to_string(min);
	return (date + " " + time + " : "+ log);
}

void Logger::log(std::string const &dest, std::string const &message)
{
	void (Logger::*log[])(std::string const &) =
	{
		&Logger::logToConsole,
		&Logger::logToFile
	};
	if (!dest.compare("console"))
		(this->*log[0])(message);
	else 
	{
		_file = dest;
		(this->*log[1])(message);
	}
}




