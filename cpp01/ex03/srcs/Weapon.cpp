/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaes-so <dpaes-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 11:08:00 by dpaes-so          #+#    #+#             */
/*   Updated: 2026/01/14 13:35:13 by dpaes-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->setType(type);
    std::cout << "Weapon construtor called" << std::endl;
}

void Weapon::setType(std::string new_type)
{
    type = new_type;
}

const std::string &Weapon::getType( void )
{
    return(this->type);
}

Weapon::~Weapon( void )
{
    std::cout << "Weapon destructor called" << std::endl;
}