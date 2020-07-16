/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchotel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 05:54:59 by jchotel           #+#    #+#             */
/*   Updated: 2020/03/12 08:01:05 by jchotel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char *av[])
{
	int i = -1;
	int j = 0;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while(av[++j])
	{
		while(av[j][++i])
		{
			if (av[j][i] >= 'a' && av[j][i] <= 'z')
				std::cout << (char)(av[j][i] - 32);
			else
				std::cout << av[j][i];
		}
		i = -1;
   	}
   	std::cout << std::endl;
	return 0;
}


