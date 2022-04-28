#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{

private:
	AMateria *inventory[4];
	int index;
	const int lim;

	void clearInventory();
	void copyInventory(MateriaSource const & src);

public:

	MateriaSource();
	MateriaSource(MateriaSource const & src);
	~MateriaSource();

	MateriaSource & operator=(MateriaSource const &);
	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);

};

#endif