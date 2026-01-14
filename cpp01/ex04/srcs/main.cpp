/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaes-so <dpaes-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 16:18:07 by dpaes-so          #+#    #+#             */
/*   Updated: 2026/01/14 15:51:32 by dpaes-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/sed_is_for_losers.hpp"


int main(int ac,char *av[])
{
    if(ac == 4)
    {
        std::ifstream file(av[1]);
        std::string out_name = av[1];
        std::ofstream out(out_name+=".replace");;
        std::string line;
        while(std::getline(file,line))
        {
            size_t found= 0;
            while(found != std::string::npos)
            {
                found = line.find(av[2],found);
                if(found != std::string::npos)
                {
                    std::cout << line.substr(10) << std::endl;
                    break ;
                }
                else
                    std::cout << line << std::endl;
            }
        }
    }
    else
        std::cout << "Incorrect parameters\n<Filename> <string replaced> <string to replace>";
}



// int main(int ac,char *av[])
// {
//     if(ac == 4)
//     {
//         std::ifstream file(av[1]);
//         std::string out_name = av[1];
//         std::ofstream out(out_name+=".replace");;
//         std::string line;
//         while(std::getline(file,line))
//         {
//             // std::cout << line << std::endl;
//             std::stringstream ss(line);
//             for (auto w = std::istream_iterator<std::string>(ss) ; w != std::istream_iterator<std::string>() ; w++)
//             {
//                 if(*w != av[2])
//                     std::cout << *w;
//                 else
//                     std::cout << av[3];
//             }   
//             std::cout << std::endl;
//         }
//     }
//     else
//         std::cout << "Incorrect parameters\n<Filename> <string replaced> <string to replace>";
// }