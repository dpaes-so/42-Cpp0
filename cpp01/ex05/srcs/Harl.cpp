/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaes-so <dpaes-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 12:04:21 by dpaes-so          #+#    #+#             */
/*   Updated: 2026/01/15 15:35:24 by dpaes-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

harl::harl()
{
    std::cout << "Hi, this is harl" << std::endl;
}

harl::~harl()
{
    std::cout << "harl died womp womp" << std::endl;
}
void harl::debug( void )
{
    std::cout << "love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." ;
    std::cout << " I really do!"  << std::endl;
}
void harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. ";
    std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<< std::endl;
}
void harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. ";
    std::cout << "I’ve been coming for years, whereas you started working here just last month."<< std::endl;
}
void harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void harl::complain(std::string level)
{
    std::string types[4] = {"DEBUG","INFO","WARNING","ERROR"};
    void (harl::*complains[4])() = {&harl::debug,&harl::info,&harl::warning,&harl::error,};
    int i = -1;
    while(++i < 4)
    {
        if(types[i] == level)
            break;
    }
    if(i < 4)
        (this->*complains[i])();
    else 
        std::cout <<  "harl is a chil guy, nothing to complain about" << std::endl;
}