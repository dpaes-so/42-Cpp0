/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaes-so <dpaes-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 10:46:34 by dpaes-so          #+#    #+#             */
/*   Updated: 2026/02/19 12:47:23 by dpaes-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *brain;
    public:
        Cat();
		Cat(std::string name);
        Cat(const Cat &src);
        Cat &operator=(Cat const &source);
        ~Cat();
		void makeSound() const;
        Brain* getBrain() const;
};
#endif