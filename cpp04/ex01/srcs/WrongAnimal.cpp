#include "../includes/WrongAnimal.hpp"

WAnimal::WAnimal()
{
    std::cout << "Default constructor called" << std::endl;
}

WAnimal::WAnimal(std::string type)
{
    this->type = type;
    std::cout << "set type constructor called" << std::endl;
}

WAnimal::WAnimal(const WAnimal &src)
{
    std::cout << "copy constructor called" << std::endl;
    std::cout << "made a copy of <" << src.type << ">" << std ::endl;
    *this = src;
}

WAnimal::~WAnimal()
{
    std::cout << "Default destructor called" << std::endl;
}

WAnimal &WAnimal::operator=(WAnimal const &source)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &source)
	{
        this->type = source.type;
    }
	return *this;
}

void WAnimal::makeSound() const
{
    std::cout << "eldritch horror noises" << std::endl;
}

std::string WAnimal::getType() const
{
    return(this->type);
}