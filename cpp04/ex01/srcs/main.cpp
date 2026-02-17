/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaes-so <dpaes-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 10:46:50 by dpaes-so          #+#    #+#             */
/*   Updated: 2026/02/17 11:12:19 by dpaes-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"

int main()
{
	Animal* animals[4];
	std::size_t n = sizeof(animals) / sizeof(animals[0]);

	for (size_t i = 0; i < n; i++){
		if (i < n / 2)
			animals[i] = new Dog;
		else
			animals[i] = new Cat;
	}

	for (size_t i = 0; i < n; i++){
		if (i < n / 2)
			animals[i]->makeSound();
		else
			animals[i]->makeSound();
	}

	for (std::size_t i = 0; i < n; ++i) {
		std::cout << "animal[" << i << "] idea[" << i <<"]: " << animals[i] << '\n';
	}

	for (size_t i = 0; i < n; i++){
		delete animals[i];
	}

	
}