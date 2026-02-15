#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
		Dog(std::string name);
        Dog(const Dog &src);
        Dog &operator=(Dog const &source);
        ~Dog();
		void makeSound() const;
};
#endif