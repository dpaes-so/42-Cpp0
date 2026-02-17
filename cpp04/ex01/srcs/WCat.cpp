/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WCat.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaes-so <dpaes-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 10:46:52 by dpaes-so          #+#    #+#             */
/*   Updated: 2026/02/17 10:52:17 by dpaes-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WCat::WCat()
{
    std::cout << "Default constructor called" << std::endl;
}

WCat::WCat(std::string type) : WAnimal(type)
{
    this->type = type;
    std::cout << "set type constructor called (WCat)" << std::endl;
}

WCat::WCat(const WCat &src) : WAnimal(src)
{
    std::cout << "copy constructor called" << std::endl;
    std::cout << "made a copy of <" << src.type << ">" << std ::endl;
    *this = src;
}

WCat::~WCat()
{
    std::cout << "Default destructor called" << std::endl;
}

WCat &WCat::operator=(WCat const &source)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &source)
	{
        this->type = source.type;
    }
	return *this;
}

void WCat::makeSound() const
{
    std::cout << "meow meow" << std::endl;
}
