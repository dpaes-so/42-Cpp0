/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaes-so <dpaes-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 17:07:13 by dpaes-so          #+#    #+#             */
/*   Updated: 2026/01/14 13:18:58 by dpaes-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"
#include "iostream"
#include <iomanip>
#include <string>
#include <cstdlib>

class HumanA
{
    private:
        Weapon &weapon;
        std::string name;
    public:
        void attack();
        HumanA( std::string name,Weapon &weapon);
        ~HumanA( void );
};

#endif