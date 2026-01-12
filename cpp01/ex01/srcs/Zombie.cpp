/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaes-so <dpaes-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 13:50:52 by dpaes-so          #+#    #+#             */
/*   Updated: 2026/01/12 16:04:51 by dpaes-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie( void )
{
    std::cout << "Zombie constructor called" << std::endl;
}
Zombie::~Zombie( void )
{
    std::cout << "Zombie destructor called for ";
    std::cout << this->name << std::endl;
}
void Zombie::announce( void )
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
void Zombie::setname(std::string name)
{
    this->name = name;
}