#include "../includes/Cat.hpp"

Cat::Cat()
{
    this->type = "cat";
    this->brain = new Brain();
    std::cout << "Default constructor called" << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
    this->brain = new Brain();
    this->type = type;
    std::cout << "set type constructor called (Cat)" << std::endl;
}

Cat::Cat(const Cat &source) : Animal(source)
{
    std::cout << "Cat copy constructor called" << std::endl;
    this->brain = new Brain(*source.brain);
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "Default destructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &source)
{
    std::cout << "Cat assignment operator called" << std::endl;

    if (this != &source)
    {
        this->Animal::operator=(source);

        delete this->brain;
        this->brain = new Brain(*source.brain);
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "meow meow" << std::endl;
}
