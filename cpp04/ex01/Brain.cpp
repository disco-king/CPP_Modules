#include "Brain.hpp"
#include <stdlib.h>


Brain::Brain() {

	std::cout << "Default constructor called for Brain"
	<< std::endl;

	for (size_t i = 0; i < 100; i++)
		ideas[i] = "An idea";
}

Brain::~Brain() {

	std::cout << "Default destructor called for Brain"
	<< std::endl;
}

Brain::Brain(Brain const & src){

	std::cout << "Copy constructor called for Brain"
	<< std::endl;
	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
}

Brain &Brain::operator=(Brain const & src){

	std::cout << "Assignment operator called for Brain"
	<< std::endl;
	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
	return *this;
}

std::string const *Brain::getIdea(int num){

	if(num < 1 || num > 100)
		return 0;
	return &ideas[num - 1];
}

