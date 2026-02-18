/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: finn <finn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 10:46:23 by dpaes-so          #+#    #+#             */
/*   Updated: 2026/02/18 19:58:35 by finn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>


//not all animals have a brain 
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