#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
		Cat(std::string name);
        Cat(const Cat &src);
        Cat &operator=(Cat const &source);
        ~Cat();
		void makeSound() const;
};
#endif