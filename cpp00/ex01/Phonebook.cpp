#include "Phonebook.hpp"
#include "Contact.hpp"

std::string const prompts[] = {"name: ", "surname: ",
"nickname: ", "phone number: ", "darkest secret: "};

Phonebook::Phonebook(){
	this->count = 0;
	this->oldest = 0;
	return;
}

std::string Phonebook::getString() const{

	std::string input;
	std::getline(std::cin, input);
	if(std::cin.eof())
	{
		std::cout << std::endl;
		exit(0);
	}
	return input;
}

int Phonebook::getGoal() const{

	if(this->count < 8)
		return this->count;
	if(this->oldest == 8)
		return 0;
	return this->oldest;
}

void Phonebook::setValues() {

	if(this->count < 8)
		this->count++;
	else if(this->oldest == 8)
		this->oldest = 1;
	else
		this->oldest++;
}

bool Phonebook::newContact(void){

	Contact buff;
	std::string str;
	int goal = this->getGoal();

	for (size_t i = 0; i < 5; i++)
	{
		std::cout << "New " << prompts[i];
		str = this->getString();
		if (buff.setName(str, i))
			return true;
	}

	this->contacts[goal].copyContact(buff);
	std::cout << "Contact added!" << std::endl << std::endl;

	this->setValues();
	return false;
}

void Phonebook::displayName(int i) const{

	std::cout << std::endl;
	for (size_t j = 0; j < 5; j++)
		std::cout << "Contact's " << prompts[j] << this->contacts[i].getInfo(j) << std::endl;
	std::cout << std::endl;
}

void Phonebook::printList() const{

	std::string buff;

	for (int i = 0; i < this->count; i++)
	{
		std::cout << '<' << i + 1 << "> ";
		for (size_t j = 0; j < 5; j++)
		{
			buff = this->contacts[i].getInfo(j);
			std::cout << '|';
			if(buff.size() <= 10)
			{
				std::cout.width(10);
				std::cout << buff;
			}
			else
				std::cout << buff.substr(0, 9) << '.';
		}
		std::cout << '|' << std::endl;
	}
}

bool Phonebook::checkNumber(int &num) const{

	std::string buff;

	for (std::string::iterator i = buff.begin(); i < buff.end(); i++)
		if(!isdigit(*i))
			return true;
	buff = this->getString();
	num = std::atoi(buff.c_str());
	return false;
} 

void Phonebook::displayList() const{

	if(this->count == 0)
	{
		std::cout << "Nothing to search!" << std::endl << std::endl;
		return ;
	}

	this->printList();

	std::cout << "Which contact to display? ";
	int index;
	if(this->checkNumber(index) || index < 1 || index > count)
		std::cout << "Wrong number mate!" << std::endl << std::endl;
	else
		displayName(index - 1);
}