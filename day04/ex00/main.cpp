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

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main(void)
{
	//Création
	Sorcerer 	s1("Robert", "le Magnifique");
	Victim 		v1("Kevin");
	Peon		p1("Mr Pan");


	std::cout << std::endl;
	//Intros
	std::cout << s1;
	std::cout << v1;
	std::cout << p1;

	std::cout << std::endl;
	//Actions
	s1.polymorphed(v1);
	s1.polymorphed(p1);
	std::cout << std::endl;
	return 0;
}
