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
		virtual void makeSound() const = 0;
        std::string getType() const;
};
#endif