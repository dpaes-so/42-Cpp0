/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaes-so <dpaes-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 10:47:28 by dpaes-so          #+#    #+#             */
/*   Updated: 2026/02/17 11:09:21 by dpaes-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"

int main()
{
    const int size = 10;
    Animal* animals[size];

    for (int i = 0; i < size; ++i)
    {
        if (i < size / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    for (int i = 0; i < size; ++i)
        animals[i]->makeSound();

    for (int i = 0; i < size; ++i)
        delete animals[i];

    Dog original;
    Dog copy = original;

    Cat originalCat;
    Cat copyCat(originalCat);

    return 0;
}