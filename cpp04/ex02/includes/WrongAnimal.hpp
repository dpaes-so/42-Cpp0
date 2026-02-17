/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaes-so <dpaes-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 10:47:16 by dpaes-so          #+#    #+#             */
/*   Updated: 2026/02/17 10:47:17 by dpaes-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WAnimal
{
    protected:
        std::string type;
    public:
        WAnimal();
		WAnimal(std::string name);
        WAnimal(const WAnimal &src);
        WAnimal &operator=(WAnimal const &source);
        ~WAnimal();
		void makeSound() const;
        std::string getType() const;
};
#endif