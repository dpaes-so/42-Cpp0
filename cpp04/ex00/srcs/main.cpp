
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"


int main()
{
	const Animal* meta = new Animal("1");
	const Animal* j = new Dog("dog");
	const Animal* i = new Cat("cat");
	const WAnimal* W = new WCat("Wcat");
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << W->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	W->makeSound();
	meta->makeSound();
}