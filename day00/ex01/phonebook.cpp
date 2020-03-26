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

#include "phonebook.h"

int main(void)
{
	int count = 0;

	std::cout << "* WELCOME TO THE PHONEBOOK *" << std::endl;
	std::cout << "Available commandes : -  ADD  -  SEARCH  -  EXIT  -  FILL  -" << std::endl;
	std::string cmd = "";

	Contact phonebook[8];

	while(cmd.compare("EXIT"))
	{
		std::getline(std::cin, cmd);
		if (!cmd.compare("FILL"))
		{
			std::string contact1[11] = {"Claudette", "Phare", "Pharette", "pharette", "67 port d'Alexendrie", "clauclau@alexandrie.fr", "+334567", "12/12/72", "Sandwich Nutella-Chèvre", "Demander à Claude Francois", "A pris un bain quelques heures après la mort de Claude Francois"};
			phonebook[count] = Contact(contact1);
			count += 1;
			std::string contact2[11] = {"Juliette", "Chotel", "ju", "jchotel", "47 en haut du col de Balme 74220 La Clusaz", "jchotel@student-42.fr", "+336..54..59","08/09/1996", "Would be easier to answer disliked food", "None", "Befriend w/ untrusty people"};
			phonebook[count] = Contact(contact2);
			count += 1;
			std::string contact3[11] = {"Robin", "Corral", "crapaud", "robin", "28 rue de l’entrebarre 74220 La Clusaz", "crapaud@tableduskieur.fr", "+123456789", "05/04/1994", "Fresh snow", "Ripped on tree after ski-jump", "Brings Juliette to difficult snow off-road just to annoy her"};
			phonebook[count] = Contact(contact3);
			count += 1;
		}
		else if (!cmd.compare("ADD"))
		{
			if (count < 8)
			{
				std::cout << "adding contact Nº " << count + 1 << std::endl;
				phonebook[count].create_contact();
				std::cout << "saved contact Nº" << count + 1 << std::endl;
				count += 1;
			}
			else
				std::cout << "You have reached the maximum number of friends, please get rid of one" << std::endl;
		}
		else if (!cmd.compare("SEARCH"))
		{
			std::cout << "|   index  |   first  |   last   |  pseudo  |" << std::endl;
			for (int j = 0; j < count; j++)
			{
				std::cout << "|     " << j << "    |";
				phonebook[j].display_search();
			}
			std::cout << "Enter a number to see full contact : ";
			int i = -1;
			std::getline(std::cin, cmd);
			std::istringstream(cmd) >> i;
			if (i >= 0 && i < count)
				phonebook[i].display_contact();



		}
		else if (cmd.compare("EXIT"))
			std::cout << "unavilable option : please read manuel" << std::endl;
	}
	return 0;
}


