/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaes-so <dpaes-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 16:18:07 by dpaes-so          #+#    #+#             */
/*   Updated: 2026/01/15 16:43:00 by dpaes-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/sed_is_for_losers.hpp"

int main(int ac,char *av[])
{
    if(ac == 4)
    {
        if (av[2][0] == '\0')
            return 1;
        std::ifstream file(av[1]);
        if(!file)
            return(std::cout << "File not found" << std::endl,1);
        std::string out_name = av[1];
        std::ofstream out(out_name+=".replace");//n criar sen eexistir 
        std::string line;
        size_t len = std::string(av[2]).length();
        while (std::getline(file, line))
        {
            size_t found = 0;
            size_t start = 0;
            while (true)
            {
                found = line.find(av[2], start);
                if (found == std::string::npos)
                {
                    out << line.substr(start) << std::endl;
                    break;
                }
                out << line.substr(start, found - start);
                out << av[3];
                start = found + len;
            }
        }
    }
    else
        std::cout << "Incorrect parameters\n<Filename> <string replaced> <string to replace>";
}

// Binary data - write()
// Text data - << 