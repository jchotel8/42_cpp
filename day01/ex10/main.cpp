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
    std::string     buffer;
	if(ac >= 2)
	{
		std::ifstream	read;
        
        for (int i = 1; i < ac; i++)
        {
        	read.open(av[i]);
        	if (!read) 
        	{
            	std::cout << "Unable to open file "<< av[i] << std::endl;
            	exit(1);
            }
            while (std::getline(read, buffer))
            	std::cout << buffer << "\n";
            read.close();
        }
    }
	else
	{
        while (std::getline(std::cin, buffer))
            std::cout << buffer << "\n";
	}
}


