/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaes-so <dpaes-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 17:07:13 by dpaes-so          #+#    #+#             */
/*   Updated: 2026/01/15 15:04:51 by dpaes-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <sstream> 
#include <iterator>

class harl
{
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
    public:
        harl();
        ~harl();
        void complain( std::string level );
};

#endif