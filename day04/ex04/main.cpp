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

//#include "IMiningLaser.hpp"
#include "DeepCoreMiner.hpp"
#include "StripMiner.hpp"
//#include "IAsteroid.hpp" 
#include "AsteroKreog.hpp"
#include "KoalaSteroid.hpp"
#include "MiningBarge.hpp"

int main()
{
	MiningBarge *barge = new MiningBarge();
	barge->equip(new DeepCoreMiner());
	barge->equip(new StripMiner());

	IAsteroid *asteroid = new AsteroKreog();
	IAsteroid *comet = new KoalaSteroid();
	std::cout << "Mining " << asteroid->getName() << " : \n";
	barge->mine(asteroid);
	std::cout << "Mining " << comet->getName() << " : \n";
	barge->mine(comet);
}
