/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchotel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 05:54:59 by jchotel           #+#    #+#             */
/*   Updated: 2020/03/12 08:01:05 by jchotel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"
#include "zombieHorde.hpp"
#include <iostream>

ZombieHorde::ZombieHorde(int n)
{
    _number = n;
    this->_zombie = new Zombie[n];

    for (int i = 0; i < this->_number; i += 1)
    {
        this->_zombie[i].setType("Horde");
        this->_zombie[i].setName(this->randomChump());
    }
    return ;
}

ZombieHorde::ZombieHorde(void)
{
    _number = 5;
    this->_zombie = new Zombie[_number];

    for (int i = 0; i < this->_number; i += 1)
    {
        this->_zombie[i].setType("Horde");
        this->_zombie[i].setName(this->randomChump());
    }
    return ;
}

ZombieHorde::~ZombieHorde(void)
{
    return ;
}

std::string ZombieHorde::randomChump(void)
{
    std::string spanish[] = {"fernando", "juanito", "alicia", "guillermo", "ezequiel", "maricruz"};
    std::string asian[] = {"pong", "chiaxing", "chenglei", "dingbang", "dong-sun", "hiroaki"};
    std::string fast[] = {"laurie", "didier", "philippe", "ophelia", "kevin", "fabien", "albertine"};
    std::string type[] = {"granny", "fat", "uniped", "fast", "crawling", "mutant", "infected"};

    return (spanish[rand() % 6]);
}

void ZombieHorde::announce(void)
{
    for (int i = 0; i < this->_number; i += 1)
    {
        this->_zombie[i].announce();
    }
    return ;
}