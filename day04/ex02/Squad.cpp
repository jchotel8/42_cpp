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

#include "Squad.hpp"

Squad::Squad(void)
{
	_list = NULL;
    std::cout << "Squad is created" << std::endl;
}

Squad::~Squad(void)
{
	int i = 0;
	t_unit *tmp = _list;
	while (tmp)
	{
		std::cout << "Unit " << i << " : ";
		i++;
		delete tmp->unit;
		tmp = tmp->next;
	}
	std::cout << "Squad is destroyed" << std::endl;
	return ;
}


//GETTERS
int Squad::getCount() const
{
	t_unit *tmp = _list;
	int i = -1;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i + 1);
}
ISpaceMarine*   Squad::getUnit(int n) const
{
	t_unit *tmp = _list;
	int i = 0;
	if (n < 0 || n > getCount())
		return (NULL);
	while (tmp && i != n)
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp->unit);
}

//SETTERS


//OTHER
int  Squad::push(ISpaceMarine* unit)
{//attention il faut verfier que le marine n'est pas deja dans la team
	int i = 0;
	if (_list == NULL)
	{
		_list = new t_unit;
		_list->unit = unit;
		_list->next = NULL;
	}
	else
	{
		t_unit *tmp = _list;
		while (tmp->next)
		{
			if (unit == tmp->unit)
			{
				std::cout << "Wait! what!? it's a duplicate!" <<std::endl;
				return (0);
			}
			tmp = tmp->next;
			i++;
		}
		if (unit == tmp->unit)
		{
			std::cout << "Wait! what!? it's a duplicate!" <<std::endl;
			return (0);
		}
		tmp->next = new t_unit;
		tmp->next->unit = unit;
		tmp->next->next = NULL;
	}
	return (i);
}