/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: finn <finn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 10:46:50 by dpaes-so          #+#    #+#             */
/*   Updated: 2026/02/18 20:16:05 by finn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include <iostream>

int main() 
{
    const std::size_t n = 4;
    Animal* animals[n];

    for (std::size_t i = 0; i < n; ++i)
	{
        if (i < n / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    for (std::size_t i = 0; i < n; ++i)
	{
        animals[i]->makeSound();
    }

    for (std::size_t i = 0; i < n; ++i) 
	{
        if (Dog* d = dynamic_cast<Dog*>(animals[i])) //just a ppinter
		{
            d->getBrain()->setIdea(0, "I want a bone");
            d->getBrain()->setIdea(1, "I will guard the house");
        }
        if (Cat* c = dynamic_cast<Cat*>(animals[i])) 
		{
            c->getBrain()->setIdea(0, "I will sleep");
            c->getBrain()->setIdea(1, "I will knock things off the table");
        }
    }

    for (std::size_t i = 0; i < n; ++i) 
	{
		std::cout << "here\n";
        if (Dog* d = dynamic_cast<Dog*>(animals[i])) 
		{
            std::cout << "Dog idea[0]: " << d->getBrain()->getIdea(0) << "\n";
            std::cout << "Dog idea[1]: " << d->getBrain()->getIdea(1) << "\n";
        }
        if (Cat* c = dynamic_cast<Cat*>(animals[i])) 
		{
            std::cout << "Cat idea[0]: " << c->getBrain()->getIdea(0) << "\n";
            std::cout << "Cat idea[1]: " << c->getBrain()->getIdea(1) << "\n";
        }
		std::cout << "end\n";
    }

    std::cout << "\n--- Deep copy test ---\n";
    Dog original;
    original.getBrain()->setIdea(0, "Original idea");

	std::cout << "div\n";
    Dog copy = original;//calls copy constucers becase copy does not exist
    copy.getBrain()->setIdea(0, "Copy idea");

    std::cout << "Original Dog idea[0]: " << original.getBrain()->getIdea(0) << "\n";
    std::cout << "Copy Dog idea[0]: " << copy.getBrain()->getIdea(0) << "\n";

    std::cout << "\n--- Delete animals ---\n";
    for (std::size_t i = 0; i < n; ++i) 
        delete animals[i];

    return 0;
}