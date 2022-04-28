#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class AMateria;

#include "ICharacter.hpp"

class AMateria
{

protected:
	std::string type;

public:

	AMateria();
	AMateria(std::string const & type);
	AMateria(AMateria const &);
	virtual ~AMateria();

	AMateria & operator=(AMateria const &);
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

};


#endif