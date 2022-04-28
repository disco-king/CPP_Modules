#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure(){

	type = "cure";
}

Cure::~Cure(){}

Cure::Cure(Cure const & src) : AMateria(){

	this->type = src.type;
	return;
}

Cure &Cure::operator=(Cure const & src){

	this->type = src.type;
	return *this;
}

Cure *Cure::clone() const{

	Cure *obj = new Cure();
	return obj;
}

void Cure::use(ICharacter& target){

	std::cout << "* heals " << target.getName() << "'s wounds *"<< std::endl;
}
