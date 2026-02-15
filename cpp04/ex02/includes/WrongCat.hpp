#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WCat : public WAnimal
{
    public:
        WCat();
		WCat(std::string name);
        WCat(const WCat &src);
        WCat &operator=(WCat const &source);
        ~WCat();
		void makeSound() const;
};
#endif