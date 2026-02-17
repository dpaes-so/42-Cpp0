/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaes-so <dpaes-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 10:42:11 by dpaes-so          #+#    #+#             */
/*   Updated: 2026/02/17 10:58:21 by dpaes-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog()
{
    std::cout << "Default constructor called" << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
    this->type = type;
    std::cout << "set type constructor called (dog)" << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src)
{
    std::cout << "copy constructor called" << std::endl;
    std::cout << "made a copy of <" << src.type << ">" << std ::endl;
    *this = src;
}

Dog::~Dog()
{
    std::cout << "Default <dog> destructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &source)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &source)
	{
        this->type = source.type;
    }
	return *this;
}

void Dog::makeSound() const
{
    std::cout << "BAU BAU" << std::endl;
}
