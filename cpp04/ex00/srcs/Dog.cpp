#include "../includes/Dog.hpp"

Dog::Dog()
{
    std::cout << "Default constructor called" << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
    this->type = type;
    std::cout << "set type constructor called (dog)" << std::endl;
}

Dog::Dog(const Dog &src) : Animal(type)
{
    std::cout << "copy constructor called" << std::endl;
    std::cout << "made a copy of <" << src.type << ">" << std ::endl;
    *this = src;
}

Dog::~Dog()
{
    std::cout << "Default destructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &source)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &source)
	{
        this->type = source.type;
    }
	return *this;
}

void Dog::makeSound() const
{
    std::cout << "BAU BAU" << std::endl;
}
