/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaes-so <dpaes-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 13:50:57 by dpaes-so          #+#    #+#             */
/*   Updated: 2026/01/12 15:41:12 by dpaes-so         ###   ########.fr       */
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
        void setname(std::string new_name);
    Zombie( void );
    ~Zombie( void );
};
Zombie* zombieHorde( int N, std::string name );
#endif