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

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

int main(void)
{
	FragTrap ft1;
	ft1.meleeAttack("Henry de Richelieu la Charentaise");
	ft1.rangedAttack("old shoes");
	ft1.takeDamage(20);
	ft1.beRepaired(10);
	ft1.vaulthunter_dot_exe("random robot");
	ft1.vaulthunter_dot_exe("other robot");
	ft1.vaulthunter_dot_exe("Henry de Richelieu la Charentaise");
	ft1.vaulthunter_dot_exe("Henry de Richelieu la Charentaise");
	ft1.print();
	std::cout << "\n\n\n\n";
	ScavTrap st1;
	st1.challengeNewcomer("hello");
	st1.challengeNewcomer("Jack");
	st1.print();
	

	return 0;
}


