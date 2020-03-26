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

#include "zombie.hpp"
#include "zombieHorde.hpp"

int main(void)
{
	//srand (time(NULL));
	std::cout << "Creation de 2 hordes de zombies via la classe zombieHorde" << std::endl;
	ZombieHorde zh_1 = ZombieHorde(10);
	ZombieHorde zh_2 = ZombieHorde();
	std::cout << "Horde 1 :" << std::endl;
	zh_1.announce();
	std::cout << "Horde 2 :" << std::endl;
	zh_2.announce();
	//zh_1.delete();
	//zh_2.delete();
	return 0;
}


