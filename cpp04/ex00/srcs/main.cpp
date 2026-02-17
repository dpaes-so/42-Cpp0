/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaes-so <dpaes-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 10:42:13 by dpaes-so          #+#    #+#             */
/*   Updated: 2026/02/17 10:57:50 by dpaes-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"


int main()
{
	Animal* s = new Animal("something");
	Animal* j = new Dog("dog");
	Animal* i = new Cat("cat");
	WAnimal* W = new WCat("Wcat");
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << W->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	W->makeSound();
	s->makeSound();
	delete s;
	delete j;
	delete i;
	delete W;
}