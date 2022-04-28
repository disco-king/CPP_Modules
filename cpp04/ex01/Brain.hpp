#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{

	// std::string getSuffix(int);
	std::string ideas[100];

public:

	Brain();
	Brain(Brain const &);
	~Brain();

	Brain & operator=(Brain const &);

	std::string const *getIdea(int num);
};

#endif