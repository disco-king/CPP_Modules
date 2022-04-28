#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

// int main()
// {
// 	Cat k1 = Cat();
// 	Cat k2(k1);
// 	// Dog k1 = Dog();
// 	// Dog k2(k1);
// 	// Cat k2;
// 	// k2 = k1;

// 	std::cout << k1.getType() << " says: ";
// 	k1.makeSound();
// 	std::cout << k2.getType() << " says: ";
// 	k2.makeSound();
// 	return 0;
// }


int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	std::cout << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl;

	const WrongAnimal *cat = new WrongCat();
	cat->makeSound();

	std::cout << std::endl;

	delete meta;
	delete i;
	delete j;
	delete cat;
	return 0;
}