/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaes-so <dpaes-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 13:50:55 by dpaes-so          #+#    #+#             */
/*   Updated: 2026/01/12 15:50:05 by dpaes-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main(void)
{
	Zombie	*heapZombie;

	std::cout << "\033[1;32mGreen\033[0m is in \033[1;32mHeap\033[0m" << std::endl;
	std::cout << "\033[1;33mYellow\033[0m is in \033[1;33mStack\033[0m" << std::endl << std::endl;

	heapZombie = newZombie("\033[1;32mAndré\033[0m");
	delete heapZombie;
	randomChump("\033[1;33mRúben\033[0m");
	heapZombie = newZombie("\033[1;32mClaudia\033[0m");
	randomChump("\033[1;33mPablo\033[0m");
	delete heapZombie;

	return (0);
}