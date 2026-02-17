/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaes-so <dpaes-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 10:42:28 by dpaes-so          #+#    #+#             */
/*   Updated: 2026/02/17 10:56:55 by dpaes-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
		Animal(std::string name);
        Animal(const Animal &src);
        Animal &operator=(Animal const &source);
        virtual ~Animal();
		virtual void makeSound() const;
        std::string getType() const;
};
#endif