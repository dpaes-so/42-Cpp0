/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaes-so <dpaes-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 10:47:18 by dpaes-so          #+#    #+#             */
/*   Updated: 2026/02/17 10:47:19 by dpaes-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WCat : public WAnimal
{
    public:
        WCat();
		WCat(std::string name);
        WCat(const WCat &src);
        WCat &operator=(WCat const &source);
        ~WCat();
		void makeSound() const;
};
#endif