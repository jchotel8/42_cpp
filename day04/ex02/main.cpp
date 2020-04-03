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

//#include "Squad.hpp"
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;

	vlc->push(bob);
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		std::cout << "Unit " << i << " : ----------------------" << std::endl;
	 	ISpaceMarine* cur = vlc->getUnit(i);
	 	cur->battleCry();
	 	cur->rangedAttack();
	 	cur->meleeAttack();
	}
	delete vlc;
	return 0;
}


//EXPECTED OUTPUT
// Tactical Marine ready for action!$
// * teleports from space *$
// For the Holy PLOT!$
// * attacks with a bolter *$
// * attaque with chainsword *$
// This code is unclean. Purify it!$
// * does nothing *$
// * attaque with chainfists *$
// Aaargh ...$
// I'll be back ...$