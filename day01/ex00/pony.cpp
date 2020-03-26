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

#include "pony.h"


Pony::Pony(void)
{
	_name = "wild_pony";
 	_owner = "wild";
    _color = "rainbow";
    _fav_food = "cupcakes";
    _speed = 5;
    _health = 100;
    _hunger = 100;
}

Pony::~Pony(void)
{
	_name = "wild_pony";
 	_owner = "wild";
    _color = "rainbow";
    _fav_food = "cupcakes";
    _speed = 5;
    _health = 100;
    _hunger = 100;
}

Pony::Pony(std::string name)
{
	_name = name;
 	_owner = "wild";
    _color = "rainbow";
    _fav_food = "cupcakes";
    _speed = 5;
    _health = 100;
    _hunger = 100;
}

Pony::Pony(std::string name, std::string owner, std::string color, std::string fav_food, int speed)
{
	_name = name;
 	_owner = owner;
    _color = color;
    _fav_food = fav_food;
    _speed = speed;
    _health = 100;
    _hunger = 100;
}
//GETTERS
std::string Pony::get_name()
{
	return(_name);
}
std::string Pony::get_owner()
{
	return(_owner);
}
std::string Pony::get_color()
{
	return(_color);
}
std::string Pony::get_fav_food()
{
	return(_fav_food);
}
int Pony::get_speed()
{
	return(_speed);
}
int Pony::get_health()
{
	return(_health);
}
int Pony::get_hunger()
{
	return(_hunger);
}

//SETTERS
void Pony::set_name(std::string name)
{
	_name = name;
}
void Pony::set_owner(std::string owner)
{
	_owner = owner;
}
void Pony::set_color(std::string color)
{
	_color = color;
}
void Pony::set_fav_food(std::string fav_food)
{
	_fav_food = fav_food;
}
void Pony::set_speed(int speed)
{
	_speed = speed;
}

std::string Pony::print()
{
	std::string res = _name + "'s health and hunger are "+ std::to_string(_health)+ " & " + std::to_string(_hunger)+ "\n";
	return(res);
}

std::string Pony::print_full()
{
	std::string res = _name +" owned by "+ _owner + " is " + _color + ". It loves " + _fav_food + " and runs at " + std::to_string(_speed)+ "\n";
	res += print();
	return(res);
}

//OTHERS
void Pony::trot()
{
	if (_health > 0 && _hunger > 0)
	{
		_health -= 5;
		if (_health < 0)
			_health = 0;
		_hunger -= 2;
		if (_hunger < 0)
			_hunger = 0;
	}
	else
		std::cout << "... I'd rather take some time of ..." << std::endl;
}
void Pony::gallop()
{
	if (_health > 0 && _hunger > 0)
	{
		_health -= 10;
		if (_health < 0)
			_health = 0;
		_hunger -= 10;
		if (_hunger < 0)
			_hunger = 0;
	}
	else
		std::cout << "... I'd rather roll on grass ..." << std::endl;
}
void Pony::eat(std::string food)
{
	if (!food.compare(_fav_food))
	{
		_hunger += 20;
		_health += 2;
	}
	else
		_hunger += 10;
	if (_hunger > 100)
		_hunger = 100;
	if (_health > 100)
		_health = 100;
}
void Pony::byte(std::string human)
{
	if (!human.compare(_owner))
		_owner = "wild";
}
void Pony::sleep()
{
	_health += 10;
	if (_health < 0)
		_health = 0;
}

