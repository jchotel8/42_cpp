/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchotel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 05:54:59 by jchotel           #+#    #+#             */
/*   Updated: 2020/03/12 08:01:05 by jchotel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombieHorde.hpp"

ZombieHorde::ZombieHorde(void)
{
 	_n = 5;
 	zombies = new Zombie[_n];
 	for (int i = 0; i < _n; i += 1)
 	{
 		zombies[i] = *randomChump();
 	}
 	return ;
}

ZombieHorde::ZombieHorde(int n)
{
 	_n = n;
 	zombies = new Zombie[_n];
 	for (int i = 0; i < _n; i += 1)
 	{
 		zombies[i] = *randomChump();
 	}
 	return ;
}

//GETTERS
int 		 ZombieHorde::get_number()
{
	return(_n);
}


//SETTERS
void 		ZombieHorde::set_number(int n)
{
	_n = n; //attention il faudra supprimer les zombies si _n > new_n et rajouter des zombies dans le cas inverse
}


//OTHERS
Zombie      *ZombieHorde::randomChump()
{
	std::string spanish[] = {"fernando", "juanito", "alicia", "guillermo", "ezequiel", "maricruz"};
	std::string asian[] = {"pong", "chiaxing", "chenglei", "dingbang", "dong-sun", "hiroaki"};
	std::string fast[] = {"laurie", "didier", "philippe", "ophelia", "kevin", "fabien"};
	std::string type[] = {"granny", "fat", "uniped", "fast", "crawling", "mutant", "infected"};
	//if (!name_cat.compare("spanish"))
	//	ref = _spanish;
	//HOW TO GET THE SIZE OF AN ARRAY ?
	return(new Zombie(fast[rand() % 6], type[rand() % 7])); 
}


void		ZombieHorde::announce()
{
	for (int i = 0; i < _n; i += 1)
	{
		zombies[i].announce();
	}
}