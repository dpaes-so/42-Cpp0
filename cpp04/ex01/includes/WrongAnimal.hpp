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