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

#include "phonebook.hpp"

Contact::Contact(std::string data[11])
{
	for (int j = 0; j < 11; j++)
	{
		m_data[j] = data[j];
	}
}

Contact::Contact()
{
}

void Contact::set_data(std::string new_field, int i)
{
	m_data[i] = new_field;
}

void Contact::create_contact()
{
	std::string cmd = "";
	for (int j = 0; j < 11; j++)
	{
		std::cout << m_field[j] << ": ";
		std::getline(std::cin, cmd);
		set_data(cmd, j);
	}
}

void Contact::display_contact()
{
	for (int j = 0; j < 11; j++)
	{
		std::cout << BOLDWHITE << m_field[j] << RESET << ": " << m_data[j] << std::endl;
	}
}

void Contact::display_field(std::string field)
{
	if (field.size() > 10)
		std::cout << std::setw(9) << std::setfill('.') << field;
	else
		std::cout << std::setw(10) << std::right << std::setfill(' ') << field;
	std::cout << "|";
}

void Contact::display_search()
{
	display_field(m_data[0]);
	display_field(m_data[1]);
	display_field(m_data[3]);
	std::cout << std::endl;
}