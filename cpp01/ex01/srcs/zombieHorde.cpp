/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaes-so <dpaes-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 14:04:50 by dpaes-so          #+#    #+#             */
/*   Updated: 2026/01/12 16:04:31 by dpaes-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *horde;

    if(N < 1)
    {
        std::cout << "The horde needs at least one Zombie!" << std::endl;
        return (NULL);
    }
    horde = new Zombie[N];
    for(int i = 0;i < N;i++)
    {
        horde[i].setname(name);
    }
    for(int i = 0;i<N;i++)
	{
		std::cout << "here";
		horde[i].announce();
	}
    return(horde);
}