/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaes-so <dpaes-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 13:50:57 by dpaes-so          #+#    #+#             */
/*   Updated: 2026/01/12 15:42:33 by dpaes-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP

#include "iostream"
#include <iomanip>
#include <string>
#include <cstdlib>

class Zombie 
{   
    private:
        std::string name;
    public:
        void announce( void );
    Zombie( std::string name );
    ~Zombie( void );
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );
#endif