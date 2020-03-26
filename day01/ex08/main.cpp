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

#include "Human.hpp"


int main(int ac, char **av)
{
    if (ac == 3)
    {
        Human h;
        std::cout << "-- Your exemple --" << std::endl;
        h.action(av[1], av[2]);
        std::cout << "-- Other exemple --" << std::endl;
        h.action("meleeAttack", "Soviet Troops");
        h.action("rangedAttack", "Indian Hippies");
        h.action("intimidatingShout", "a fluffy pingouin");
    }
    else
    {
        std::cout << "Missing args" << std::endl;
        std::cout << "./attack action target" << std::endl;
    }

}


