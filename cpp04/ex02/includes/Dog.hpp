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
		void makeSound() const;
};
#endif