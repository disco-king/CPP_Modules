#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice(){

	type = "ice";
}

Ice::~Ice(){}

Ice::Ice(Ice const & src) : AMateria(){

	this->type = src.type;
	return;
}

Ice &Ice::operator=(Ice const & src){

	this->type = src.type;
	return *this;
}

Ice *Ice::clone() const{

	Ice *obj = new Ice();
	return obj;
}


void Ice::use(ICharacter& target){

	std::cout << "* shoots an ice bolt at " << target.getName() << " *"<< std::endl;
}
