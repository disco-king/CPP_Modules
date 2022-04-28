#include "Cat.hpp"
#include "Dog.hpp"

// int main()
// {
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();

// 	std::cout << std::endl;
	
// 	std::cout << i->getType() << " says: ";
// 	i->makeSound();

// 	std::cout << std::endl;

// 	Cat regular_cat = Cat(*(dynamic_cast<Cat *>(const_cast<Animal *>(i))));

// 	std::cout << std::endl;

// 	std::cout << regular_cat.getType() << " says: ";
// 	regular_cat.makeSound();

// 	std::cout << std::endl;

// 	delete j;//should not create a leak
// 	delete i;

// 	return 0;
// }

int main()
{
	
	int size = 4;
	Animal *arr[size];
	int i;

	for (i = 0; i < size; i++)
	{
		if(i < size / 2)
			arr[i] = new Cat();
		else
			arr[i] = new Dog();
	}

	std::cout << std::endl;

	for (i = 0; i < size; i++)
	{
		std::cout << arr[i]->getType() << " says: ";
		arr[i]->makeSound();
	}

	std::cout << std::endl;

	for (i = 0; i < size; i++)
		delete arr[i];

/*	std::cout << std::endl;

	Dog k1 = Dog();
	Dog k2;

	k1 = k2;

	std::cout << std::endl;

	std::string const *cat_idea = k1.checkBrain(1);
	std::cout << "cat idea <" << *cat_idea << "> " << cat_idea << std::endl;
	cat_idea = k2.checkBrain(1);
	std::cout << "cat idea <" << *cat_idea << "> " << cat_idea << std::endl;

	std::cout << std::endl;*/

	return 0;
}
