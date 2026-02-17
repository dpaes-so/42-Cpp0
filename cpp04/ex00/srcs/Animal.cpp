/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaes-so <dpaes-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 10:42:07 by dpaes-so          #+#    #+#             */
/*   Updated: 2026/02/17 10:59:47 by dpaes-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal()
{
    std::cout << "Default constructor called" << std::endl;
}

Animal::Animal(std::string type)
{
    this->type = type;
    std::cout << "set type constructor called <default animal>" << std::endl;
}

Animal::Animal(const Animal &src)
{
    std::cout << "copy constructor called" << std::endl;
    std::cout << "made a copy of <" << src.type << ">" << std ::endl;
    *this = src;
}

Animal::~Animal()
{
    std::cout << "Default <Animal> destructor called" << std::endl;
}

Animal &Animal::operator=(Animal const &source)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &source)
	{
        this->type = source.type;
    }
	return *this;
}

void Animal::makeSound() const
{
    std::cout << "eldritch horror noises" << std::endl;
}

std::string Animal::getType() const
{
    return(this->type);
}