#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public Animal
{

private:

	Brain *brain;

public:

	Dog();
	Dog(Dog const &);
	~Dog();

	Dog & operator=(Dog const &);

	std::string const *checkBrain(int num = 1) const;
	void makeSound() const;
};

#endif
