/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaes-so <dpaes-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 16:18:07 by dpaes-so          #+#    #+#             */
/*   Updated: 2026/01/15 15:30:18 by dpaes-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int main(int ac, char *av[])
{
	if(ac == 2)
	{
		harl harl;
		harl.complain(av[1]);
	}
	else
		std::cout << "Harl alwyas complain about only one thing" << std::endl;
	return (0);
}