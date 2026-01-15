/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaes-so <dpaes-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 12:04:21 by dpaes-so          #+#    #+#             */
/*   Updated: 2026/01/15 15:40:06 by dpaes-so         ###   ########.fr       */
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
    std::cout << "[DEBUG]" << std::endl;
    std::cout << "love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." ;
    std::cout << " I really do!"  << std::endl;
}
void harl::info( void )
{
    std::cout << "[INFO]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. ";
    std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<< std::endl;
}
void harl::warning( void )
{
    std::cout << "[WARNING]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. ";
    std::cout << "I’ve been coming for years, whereas you started working here just last month."<< std::endl;
}
void harl::error( void )
{
    std::cout << "[ERROR]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void harl::complain(std::string level)
{
    std::string types[4] = {"DEBUG","INFO","WARNING","ERROR"};
    int i = -1;
    while(++i < 4)
    {
        if(types[i] == level)
            break;
    }
    switch (i)
    {
        case 0:
            debug();
        case 1:
            info();
        case 2:
            warning();
        case 3:
            error();
            break;
        default:
            std::cout <<  "harl is a chil guy, nothing to complain about" << std::endl;
    }
}