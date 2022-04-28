#include "Karen.hpp"

std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

Karen::Karen() {}


Karen::~Karen() {}

void Karen::complain(std::string level){

	size_t i;
	for (i = 0; i < 4; i++)
		if(level == levels[i])
			break;
	
	switch (i)
	{
	case 0:
		std::cout << "[ " << levels[0] << " ]" << std::endl;
		this->debug();

	case 1:
		std::cout << "[ " << levels[1] << " ]" << std::endl;
		this->info();

	case 2:
		std::cout << "[ " << levels[2] << " ]" << std::endl;
		this->warning();

	case 3:
		std::cout << "[ " << levels[3] << " ]" << std::endl;
		this->error();
		break ;

	default:
		std::cout << "[ Probably complaining about \
insignificant problems ]" << std::endl << std::endl;
	}
	
}

void Karen::debug(void){

	std::cout << "I love having extra bacon for \
my 7XL-double-cheese-triple-pickle-special \
ketchup burger. I really do!" << std::endl;
	std::cout << std::endl;
}

void Karen::info(void){

	std::cout << "I cannot believe adding extra bacon \
costs more money. You didn't put enough bacon in my \
burger! If you did, I wouldn't be asking for more!" << std::endl;
	std::cout << std::endl;
}

void Karen::warning(void){

	std::cout << "I think I deserve to have some extra \
bacon for free. I've been coming for years whereas \
you started working here since last month." << std::endl;
	std::cout << std::endl;
}

void Karen::error(void){

	std::cout << "This is unacceptable! I want to speak \
to the manager now." << std::endl;
	std::cout << std::endl;
}