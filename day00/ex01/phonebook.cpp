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

#include "phonebook.hpp"

void do_fill(int *count, Contact phonebook[8])
{
	if (*count < 8)
	{
		std::string contact1[11] = {"Claudette", "Phare", "Pharette", "pharette", "67 port d'Alexendrie", "clauclau@alexandrie.fr", "+334567", "12/12/72", "Sandwich Nutella-Chèvre", "Demander à Claude Francois", "A pris un bain quelques heures après la mort de Claude Francois"};
		phonebook[*count] = Contact(contact1);
		*count += 1;
	}
	if (*count < 8)
	{
		std::string contact2[11] = {"Juliette", "Chotel", "ju", "jchotel", "47 en haut du col de Balme 74220 La Clusaz", "jchotel@student-42.fr", "+336..54..59","08/09/1996", "Mom's lemon pie", "None", "Befriend w/ untrusty people"};
		phonebook[*count] = Contact(contact2);
		*count += 1;
	}
	else
	{
		std::cout << GREEN << "* 1 contacts added *" << RESET <<std::endl;
		return ; 
	}
	if (*count < 8)
	{
		std::string contact3[11] = {"Robin", "Corral", "crapaud", "robin", "28 rue de l’entrebarre 74220 La Clusaz", "crapaud@tableduskieur.fr", "+123456789", "05/04/1994", "Fresh snow", "Ripped on tree after ski-jump", "Brings Juliette to difficult snow off-road just to mess w/ her"};
		phonebook[*count] = Contact(contact3);
		*count += 1;
	}
	else
	{
		std::cout << GREEN << "* 2 contacts added *" << RESET <<std::endl;
		return ; 
	}
	std::cout << GREEN << "* 3 contacts added *" << RESET <<std::endl;
}

void do_add(int *count, Contact phonebook[8])
{
	if (*count < 8)
	{
		std::cout << GREEN <<"adding contact Nº " << *count + 1 << RESET << std::endl;
		phonebook[*count].create_contact();
		std::cout << GREEN << "saved contact Nº" << *count + 1 << RESET << std::endl;
		*count += 1;
	}
	else
		std::cout << RED <<"You have reached the maximum capacity of friends, please get rid of one" << RESET << std::endl;
}

void do_search(int count, Contact phonebook[8])
{
	std::cout << "|   index  |   first  |   last   |  pseudo  |" << std::endl;
	for (int j = 0; j < count; j++)
	{
		std::cout << "|     " << j << "    |";
		phonebook[j].display_search();
	}
	std::cout << GREEN << "Enter a number to see full contact : " << RESET;
	int i = -1;
	std::string cmd = "";
	std::getline(std::cin, cmd);
	std::istringstream(cmd) >> i;
	if (i >= 0 && i < count)
		phonebook[i].display_contact();
	else
		std::cout << RED << "Haha, you wish you had that many friend" << RESET << std::endl;
}

void do_remove(int *count, Contact phonebook[8])
{
	std::cout << "|   index  |   first  |   last   |  pseudo  |" << std::endl;
	for (int j = 0; j < *count; j++)
	{
		std::cout << "|     " << j << "    |";
		phonebook[j].display_search();
	}
	std::cout << GREEN << "Enter a number to remove contact : " << RESET;
	int i = -1;
	std::string cmd = "";
	std::getline(std::cin, cmd);
	std::istringstream(cmd) >> i;
	if (i >= 0 && i < *count)
	{
		while (i < *count - 1)
		{
			phonebook[i] = phonebook[i + 1];
			i++;
		}
		*count -= 1;
	}
	else
		std::cout << RED << "Haha, you wish you had that many friend" << RESET << std::endl;
}

int main(void)
{
	int count = 0;

	std::cout << MAGENTA << PHONEBOOK1 << PHONEBOOK2 << PHONEBOOK3 << RESET << std::endl;
	std::cout << CYAN << "Available commandes : -  ADD  -  SEARCH  -  EXIT  -  FILL  -" << RESET << std::endl;
	std::string cmd = "";

	Contact phonebook[8];

	while(cmd.compare("EXIT"))
	{
		
		std::cout << CYAN << "commande : ";
		std::getline(std::cin, cmd);
		std::cout << RESET;
		if (!cmd.compare("FILL"))
			do_fill(&count, phonebook);
		else if (!cmd.compare("ADD"))
			do_add(&count, phonebook);
		else if (!cmd.compare("SEARCH"))
			do_search(count, phonebook);
		else if (!cmd.compare("REMOVE"))
			do_remove(&count, phonebook);
		else if (cmd.compare("EXIT"))
			std::cout << RED << "UNAVAILABLE OPTION : please read manuel" << RESET << std::endl;
	}
	return 0;
}


