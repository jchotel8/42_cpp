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

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "Character.hpp"

int main()
{
	Character* moi = new Character("moi");

	std::cout << *moi;

	Enemy* b = new RadScorpion();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	moi->equip(pr);
	std::cout << *moi;
	moi->equip(pf);

	moi->attack(b);
	std::cout << *moi;
	moi->equip(pr);
	std::cout << *moi;
	moi->attack(b);
	std::cout << *moi;
	moi->attack(b);
	std::cout << *moi;

	return 0;
}

//EXPECTED OUTPUT : 
// moi has 40 AP and is unarmed$
// * click click click *$
// moi has 40 AP and carries a Plasma Rifle$
// moi hasttaque RadScorpion with a Power Fist$
// * pschhh... SBAM! *$
// moi has 32 AP and carries a Power Fist$
// moi has 32 AP and carries a Plasma Rifle$
// moi hasttaque RadScorpion with a Plasma Rifle$
// * piouuu piouuu piouuu *$
// moi has 27 AP and carries a Plasma Rifle$
// moi hasttaque RadScorpion with a Plasma Rifle$
// * piouuu piouuu piouuu *$
// * SPROTCH *$
// moi has 22 AP and carries a Plasma Rifle$