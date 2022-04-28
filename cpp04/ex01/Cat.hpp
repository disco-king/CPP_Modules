#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public Animal
{

private:

	Brain *brain;

public:

	Cat();
	Cat(Cat const &);
	~Cat();

	Cat & operator=(Cat const &);

	std::string const *checkBrain(int num = 1) const;
	void makeSound() const;
};

#endif