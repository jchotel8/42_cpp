 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchotel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 05:54:59 by jchotel           #+#    #+#             */
/*   Updated: 2020/03/12 08:01:05 by jchotel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	if(ac == 4)
	{
		std::string 	fileName = av[1];
		std::string 	s1 = av[2];
		std::string 	s2 = av[3];
		std::string		buffer;
		std::ifstream	read;
    
    	read.open(fileName);
    	if (!read) 
    	{
        	std::cout << "Unable to open file" << std::endl;
        	exit(1);
        }
        std::ofstream    out(fileName + ".replace");
        if (!out)
        {
        	std::cout << "Unable to create file" << std::endl;
        	exit(1);
        }
        while (std::getline(read, buffer))
        {
        	while (buffer.find(s1) != std::string::npos)
        		buffer.replace(buffer.find(s1), s1.length(), s2);
        	out << buffer << "\n";
        }
        read.close();
        out.close();
    }
	else
	{
		std::cout << "Missing args" << std::endl;
		std::cout << "./replace fileName s1 s2" << std::endl;
		std::cout << "From a given file, replace all occurences of s1 by s2" << std::endl;
	}


}


