#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(std::string const & type){

	this->type = type;
}

AMateria::~AMateria() {}

AMateria::AMateria(AMateria const & src){

	this->type = src.type;
	return;
}

AMateria &AMateria::operator=(AMateria const & src){

	this->type = src.type;
	return *this;
}

std::string const &AMateria::getType() const{

	return this->type;
}

void AMateria::use(ICharacter& target){

	std::cout << "I won't do anything with "
	<< target.getName() << " amyway" << std::endl;
}

