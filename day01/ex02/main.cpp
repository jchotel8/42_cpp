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

#include "zombie.h"
#include "zombieEvent.h"

int main(void)
{
	std::cout << "Creation de 3 zombies via la classe zombie" << std::endl;
	Zombie *georgette = new Zombie();
	Zombie *gaston = new Zombie("gaston", "uniped");
	Zombie hector;
	hector.set_name("hector");
	hector.set_type("fat");

	georgette->advert();
	gaston->advert();
	hector.advert();
	delete (georgette);
	delete (gaston);

	std::cout << "Creation de 3 zombies random via la classe zombieEvent" << std::endl;
	ZombieEvent event;
	Zombie *zombie_1 = event.randomChump();
	event.setZombieType("uniped");
	Zombie *zombie_2 = event.randomChump();
	Zombie *zombie_3 = event.randomChump();
	zombie_1->announce();
	zombie_2->announce();
	zombie_3->announce();
	delete (zombie_1);
	delete (zombie_2);
	delete (zombie_3);

	return 0;
}


