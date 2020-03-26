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

#include "pony.h"

void ponyOnTheHeap()
{
	Pony *cracotte = new Pony("cracotte", "pico alto ranch", "framboise", "biscotte", 2);
	std::cout << cracotte->print_full();
	cracotte->gallop();
	std::cout << "*** " << cracotte->get_name() << " is galloping ***\n";
	std::cout << cracotte->print();
	cracotte->eat("grass");
	std::cout << "*** " << cracotte->get_name() << " is eating grass ***\n";
	std::cout << cracotte->print();
	cracotte->trot();
	std::cout << "*** " << cracotte->get_name() << " is trotting ***\n";
	std::cout << cracotte->print();
	cracotte->eat(cracotte->get_fav_food());
	std::cout << "*** " << cracotte->get_name() << " is eating " << cracotte->get_fav_food() << " ***\n";
	std::cout << cracotte->print();
	cracotte->byte(cracotte->get_owner());
	std::cout << "*** " << cracotte->get_name() << " is bitting ***\n";
	std::cout << cracotte->print_full();

}
void ponyOnTheStack()
{
	Pony flash;
	std::cout << flash.print_full();
	flash.set_name("flash");
	flash.set_owner("royaume enchanté");
	std::cout << "*** " << flash.get_name() << " is captured ***\n";
	std::cout << flash.print_full();
	flash.gallop();
	flash.gallop();
	std::cout << "*** " << flash.get_name() << " is galloping twice ***\n";
	flash.trot();
	flash.trot();
	std::cout << "*** " << flash.get_name() << " is trotting twice ***\n";
	std::cout << flash.print();
	flash.eat("apple");
	std::cout << "*** " << flash.get_name() << " is eating apple ***\n";
	std::cout << flash.print_full();

}

int main(void)
{
	std::cout << "--- PONY ON THE HEAP ---"<< std::endl;
	ponyOnTheHeap();
	std::cout << std::endl << "--- PONY ON THE STACK ---" << std::endl;
	ponyOnTheStack();
	return 0;
}


