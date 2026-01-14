/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaes-so <dpaes-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 10:57:45 by dpaes-so          #+#    #+#             */
/*   Updated: 2026/01/14 13:37:39 by dpaes-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon), name(name)
{
	std::cout << "HumanA: " << name << " has been Created!!" << std::endl;
}

HumanA::~HumanA( void )
{
    std::cout << "humanA destructor called" << std::endl;
}

void HumanA::attack( void )
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

