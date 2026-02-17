/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaes-so <dpaes-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 10:42:09 by dpaes-so          #+#    #+#             */
/*   Updated: 2026/02/17 10:58:25 by dpaes-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat()
{
    std::cout << "Default constructor called" << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
    this->type = type;
    std::cout << "set type constructor called (Cat)" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src)
{
    std::cout << "copy constructor called" << std::endl;
    std::cout << "made a copy of <" << src.type << ">" << std ::endl;
    *this = src;
}

Cat::~Cat()
{
    std::cout << "Default <cat> destructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &source)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &source)
	{
        this->type = source.type;
    }
	return *this;
}

void Cat::makeSound() const
{
    std::cout << "meow meow" << std::endl;
}
