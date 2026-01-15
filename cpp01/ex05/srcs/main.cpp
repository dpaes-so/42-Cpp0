/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaes-so <dpaes-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 16:18:07 by dpaes-so          #+#    #+#             */
/*   Updated: 2026/01/15 15:17:31 by dpaes-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int main(int argc, char **argv)
{
	std::cout << std::endl;
	std::cout << "Let's see what Harl has to say to us today";
	std::cout << std::endl << std::endl;
    
	harl harl;
	
	std::cout << "testing \"DEBUG\" complain";
	std::cout << std::endl;
	harl.complain("DEBUG");

	std::cout << "testing \"INFO\" complain";
	std::cout << std::endl;
	harl.complain("INFO");

	std::cout << "testing \"WARNING\" complain";
	std::cout << std::endl;
	harl.complain("WARNING");

	std::cout << "testing \"ERROR\" complain";
	std::cout << std::endl;
	harl.complain("ERROR");

	std::cout << "testing \"lorem ipsum\" complain";
	std::cout << std::endl;
	harl.complain("lorem ipsum");
	
	for (int i = 1; i < argc; i++)
	{	
		std::cout << "testing \"" << argv[i] << "\" complain";
		std::cout << std::endl;
		harl.complain(argv[i]);
	}
	return (0);
}