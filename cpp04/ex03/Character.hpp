#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{

private:
	std::string name;
	int index;
	const int lim;
	AMateria *inventory[4];

	void clearInventory();
	void copyInventory(Character const & src);

	static AMateria *dropped[100];
	bool drop(AMateria* m);
	void clearDrops();
	static int num_characters;

public:

	Character();
	Character(std::string const & name);
	Character(Character const &src);
	~Character();

	Character & operator=(Character const &);
	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};

#endif