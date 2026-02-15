#include "../includes/Cat.hpp"

Cat::Cat()
{
    std::cout << "Default constructor called" << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
    this->type = type;
    std::cout << "set type constructor called (Cat)" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(type)
{
    std::cout << "copy constructor called" << std::endl;
    std::cout << "made a copy of <" << src.type << ">" << std ::endl;
    *this = src;
}

Cat::~Cat()
{
    std::cout << "Default destructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &source)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &source)
	{
        this->type = source.type;
    }
	return *this;
}

void Cat::makeSound() const
{
    std::cout << "meow meow" << std::endl;
}
