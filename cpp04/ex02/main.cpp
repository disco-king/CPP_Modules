#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	// const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	std::cout << std::endl;

	Cat regular_cat = Cat(*(dynamic_cast<Cat *>(const_cast<Animal *>(i))));
	regular_cat.makeSound();

	std::cout << std::endl;

	i->makeSound(); //will output the cat sound!
	j->Animal::makeSound();

	std::cout << std::endl;

	delete i;
	delete j;
	return 0;
}