/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaes-so <dpaes-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 10:57:45 by dpaes-so          #+#    #+#             */
/*   Updated: 2026/01/14 13:34:55 by dpaes-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"


HumanB::HumanB(std::string name)
{
    this->name = name;
	std::cout << "HumanB: " << name << " has been Created!!" << std::endl;
}

HumanB::~HumanB( void )
{
    std::cout << "humanB destructor called" << std::endl;
}

void HumanB::attack( void )
{
    std::cout << name << " attacks with their " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weap)
{
    this->weapon = &weap;
}