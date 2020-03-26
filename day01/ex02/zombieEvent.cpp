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

#include "zombieEvent.h"

ZombieEvent::ZombieEvent(void)
{
 	_type = "granny";
}

ZombieEvent::ZombieEvent(std::string type)
{
 	_type = type;
}


//GETTERS
std::string ZombieEvent::getZombieType()
{
	return(_type);
}


//SETTERS
void 		ZombieEvent::setZombieType(std::string type)
{
	_type = type;
}



//OTHERS
Zombie 		*ZombieEvent::newZombie (std::string name)
{
	return(new Zombie(name, _type));
}

Zombie      *ZombieEvent::randomChump()
{
	std::string spanish[] = {"fernando", "juanito", "alicia", "guillermo"};
	std::string asian[] = {"pong", "chiaxing", "chenglei", "dingbang", "dong-sun", "hiroaki"};
	std::string fast[] = {"laurie", "didier", "philippe", "ophelia", "kevin", "fabien"};
	//if (!name_cat.compare("spanish"))
	//	ref = _spanish;
	return(newZombie(fast[rand() % 6])); 
}