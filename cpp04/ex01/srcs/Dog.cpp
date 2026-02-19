/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaes-so <dpaes-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 10:46:48 by dpaes-so          #+#    #+#             */
/*   Updated: 2026/02/19 12:47:43 by dpaes-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog()
{
    this->brain = new Brain();
    this->type = "Dog";
    std::cout << "Default constructor called (dog)" << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
    this->brain = new Brain();
    this->type = type;
    std::cout << "set type constructor called (dog)" << std::endl;
}

Dog::Dog(Dog const &src) : Animal(src)
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->brain = new Brain(*src.brain);
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "Default destructor called (dog)" << std::endl;
}

Dog &Dog::operator=(Dog const &source)
{
    std::cout << "Copy assignment operator called " << std::endl;
    if (this != &source)
    {
        this->Animal::operator=(source);
        delete this->brain;
        this->brain = new Brain(*source.brain);
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "BAU BAU" << std::endl;
}

Brain* Dog::getBrain() const {
    return brain;
}