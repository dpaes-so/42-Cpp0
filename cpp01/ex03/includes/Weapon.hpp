/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaes-so <dpaes-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 13:50:57 by dpaes-so          #+#    #+#             */
/*   Updated: 2026/01/12 17:06:40 by dpaes-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP

#include "iostream"
#include <iomanip>
#include <string>
#include <cstdlib>

class Weapon
{
    private:
        std::string type;
        
    public:
        const std::string &getType();
        void setType(std::string new_type);
        Weapon( void );
        ~Weapon( void );
};
class HumanA
{
    private:
        Weapon weapon;
        std::string name;
    public:
        void atack();
        HumanA( void );
        ~HumanA( void );
};

class HumanB
{
    private:
        Weapon weapon;
        std::string name;
    public:
        void atack();
        HumanB( void );
        ~HumanB( void );
};
#endif