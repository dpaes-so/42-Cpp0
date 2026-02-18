/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: finn <finn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 10:46:36 by dpaes-so          #+#    #+#             */
/*   Updated: 2026/02/18 19:49:11 by finn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *brain;
    public:
        Dog();
		Dog(std::string name);
        Dog(const Dog &src);
        Dog &operator=(Dog const &source);
        ~Dog();
        void setIdea(int index, const std::string &idea);
		void makeSound() const;
        Brain* getBrain() const;
};
#endif