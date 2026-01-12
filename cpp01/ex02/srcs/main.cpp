/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaes-so <dpaes-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 16:18:07 by dpaes-so          #+#    #+#             */
/*   Updated: 2026/01/12 16:52:42 by dpaes-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << "string memory adress: " << &string << std::endl;
    std::cout << "strPTR memory adress: " << stringPTR << std::endl;
    std::cout << "string memory adress: " << &stringREF << std::endl;

    std::cout << "string value: " << string << std::endl;
    std::cout << "strPTR value: " << *stringPTR << std::endl;
    std::cout << "string value: " << string << std::endl;
    return(0);
}