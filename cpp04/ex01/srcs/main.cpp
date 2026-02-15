
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"

int main()
{
    const int size = 10;
    Animal* animals[size];

    // Fill half dogs, half cats
    for (int i = 0; i < size; ++i)
    {
        if (i < size / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    // Make sounds
    for (int i = 0; i < size; ++i)
        animals[i]->makeSound();

    // Delete as Animal*
    for (int i = 0; i < size; ++i)
        delete animals[i];

    // Deep copy test
    Dog original;
    original.makeSound();
    Dog copy = original;

    Cat originalCat;
    Cat copyCat(originalCat);

    return 0;
}