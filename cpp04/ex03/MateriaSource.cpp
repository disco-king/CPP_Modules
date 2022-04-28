#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : lim(4){

	index = 0;
}

void MateriaSource::clearInventory(){

	int i = 0;
	while(inventory[i] && i < index)
	{
		delete inventory[i];
		i++;
	}
	index = 0;
}

void MateriaSource::copyInventory(MateriaSource const & src){

	int i = 0;
	while(src.inventory[i] && i < lim)
		this->inventory[i] = src.inventory[i]->clone();
	this->index = src.index;
}

MateriaSource::~MateriaSource() {

	clearInventory();
}

MateriaSource::MateriaSource(MateriaSource const & src) : lim(4){

	copyInventory(src);
}

MateriaSource &MateriaSource::operator=(MateriaSource const & src){

	clearInventory();
	copyInventory(src);
	return *this;
}

void MateriaSource::learnMateria(AMateria *src){

	if(index == lim)
	{
		std::cout << "Inventory full" << std::endl;
		delete src;
		return;
	}
	inventory[index] = src;
	index++;
}

AMateria *MateriaSource::createMateria(std::string const & type){

	int i = 0;
	while(inventory[i] && i < lim)
	{
		if(inventory[i]->getType() == type)
			return inventory[i]->clone();
		i++;
	}
	return 0;
}
