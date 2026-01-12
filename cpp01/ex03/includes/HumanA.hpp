/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaes-so <dpaes-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 17:07:13 by dpaes-so          #+#    #+#             */
/*   Updated: 2026/01/12 17:07:33 by dpaes-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP

#include "Weapon.hpp"
#include "iostream"
#include <iomanip>
#include <string>
#include <cstdlib>

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

#endif