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

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &m)
{
	*this = m;
}

MateriaSource::~MateriaSource(void)
{
	return ;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& m)
{
	for (int i = 0; i < 4; i++)
		_materia[i] = m._materia[i]->clone();
	return(*this);
}

//GETTERS


//SETTERS


//OTHER
void MateriaSource::learnMateria(AMateria* m)
{
	int i = 0;
	while (_materia[i] && i < 4)
		i++;
	if (i < 4)
		_materia[i] = m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
		if (_materia[i] && _materia[i]->getType() == type)
			return (_materia[i]->clone());
	return (NULL);
}


