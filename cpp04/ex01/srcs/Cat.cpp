/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: finn <finn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 10:46:46 by dpaes-so          #+#    #+#             */
/*   Updated: 2026/02/18 19:21:26 by finn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    this->brain = new Brain();
    std::cout << "Default constructor called (cat)" << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
    this->brain = new Brain();
    this->type = type;
    std::cout << "set type constructor called (Cat)" << std::endl;
}

Cat::Cat(const Cat &source) : Animal(source)
{
    std::cout << "Cat copy constructor called" << std::endl;
    this->brain = new Brain(*source.brain);
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "Default destructor called (cat)" << std::endl;
}

Cat &Cat::operator=(Cat const &source)
{
    std::cout << "Cat assignment operator called" << std::endl;

    if (this != &source)
    {
        this->Animal::operator=(source);

        delete this->brain;
        this->brain = new Brain(*source.brain);
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "meow meow" << std::endl;
}

Brain* Cat::getBrain() const {
    return brain;
}