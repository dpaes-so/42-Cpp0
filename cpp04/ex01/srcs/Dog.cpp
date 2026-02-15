#include "../includes/Dog.hpp"

Dog::Dog()
{
    this->brain = new Brain();
    this->type = "dog";
    std::cout << "Default constructor called" << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
    this->brain = new Brain();
    this->type = type;
    std::cout << "set type constructor called (dog)" << std::endl;
}

Dog::Dog(Dog const &src)
{
	*this = src;
	this->brain = new Brain();
	if (this->brain)
	{
		for (int i = 0; i < 100; i++)
			this->brain->setIdea(i, src.brain->getIdea(i));
	}
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "Default destructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &source)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &source)
	{
        this->type = source.type;
    }
    delete brain;
    brain = new Brain(*source.brain);
	return *this;
}

void Dog::makeSound() const
{
    std::cout << "BAU BAU" << std::endl;
}
