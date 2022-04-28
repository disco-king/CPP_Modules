#include "Character.hpp"

int Character::num_characters = 0;
AMateria *Character::dropped[100];


void Character::clearDrops(){

	int i = 0;
	while(dropped[i] != 0)
	{
		delete dropped[i];
		i++;
	}
}

Character::Character() : name("Default name"), lim(4){

	index = 0;
	num_characters++;
}

Character::Character(std::string const & name) : name(name), lim(4){

	index = 0;
	num_characters++;
}

void Character::clearInventory(){

	int i = 0;
	while(inventory[i] && i < lim)
	{
		delete inventory[i];
		i++;
	}
	index = 0;
}

void Character::copyInventory(Character const & src){

	int i = 0;
	while(src.inventory[i] && i < lim)
		this->inventory[i] = src.inventory[i]->clone();
	this->index = src.index;
}

Character::~Character() {

	clearInventory();
	num_characters--;
	if(num_characters == 0)
		clearDrops();
}

Character::Character(Character const & src) : lim(4){

	this->name = src.name;
	copyInventory(src);
	num_characters++;
}

Character &Character::operator=(Character const & src){

	this->name = src.name;
	clearInventory();
	copyInventory(src);
	return *this;
}

std::string const &Character::getName() const{

	return name;
}

void Character::equip(AMateria* m){

	if (index == lim)
	{
		std::cout << "Inventory full" << std::endl;
		delete m;
		return;
	}
	inventory[index] = m;
	index++;
}

bool Character::drop(AMateria* m){

	int i = 0;
	while(dropped[i] != 0)
	{
		i++;
		if(i == 100)
			return true;
	}
	dropped[i] = m;
	return false;
}

void Character::unequip(int idx){

	if (idx < 0 || idx >= index)
	{
		std::cout << "No such item" << std::endl;
		return;
	}

	if(drop(inventory[idx]))
		return ;

	if (idx < index)
	{
		while (idx < index - 1)
		{
			inventory[idx] = inventory[idx + 1];
			idx++;
		}
		inventory[idx] = 0;
		index = idx;
	}
}

void Character::use(int idx, ICharacter& target){

	if(idx < 0 || idx >= index)
	{
		std::cout << "No such item" << std::endl;
		return;
	}

	inventory[idx]->use(target);
}
