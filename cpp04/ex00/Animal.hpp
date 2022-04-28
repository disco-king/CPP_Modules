#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{

protected:

	std::string type;

public:

	Animal();
	Animal(Animal const &);
	virtual ~Animal();

	Animal & operator=(Animal const &);

	std::string getType() const;
	virtual void makeSound() const;

};

#endif