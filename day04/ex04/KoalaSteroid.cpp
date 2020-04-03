/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchotel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 05:54:59 by jchotel           #+#    #+#             */
/*   Updated: 2020/03/12 08:01:05 by jchotel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "KoalaSteroid.hpp"

KoalaSteroid::KoalaSteroid()
{
	_name = "KoalaSteroid";
	std::cout << "["<< _name <<"] * splash - crack * - a new comet is discovered" <<std::endl;
}

KoalaSteroid::KoalaSteroid(const KoalaSteroid &m)
{
	*this = m;
}

KoalaSteroid::~KoalaSteroid(void)
{
	return ;
}

KoalaSteroid& KoalaSteroid::operator=(const KoalaSteroid& m)
{
	//_xp = m._xp;
	return(*this);
}


//GETTERS
std::string KoalaSteroid::getName() const
{
	return(_name);
}

//SETTERS


//OTHER
std::string KoalaSteroid::beMined(DeepCoreMiner* m) const
{
	(void) m;
	return ("Mithril");
}

std::string KoalaSteroid::beMined(StripMiner* m) const
{
	(void) m;
	return ("Tartarite");
}

