#include <iostream>
#include "Phonebook.hpp"
#include "Contact.hpp"

int main()
{
	Phonebook book;
	std::string input;
	for(;;)
	{
		std::cout << "ADD, SEARCH or EXIT? ";
		input = book.getString();
		if(input == "ADD")
		{
			if(book.newContact())
				std::cout << "Wrong input!" << std::endl << std::endl;
		}
		else if(input == "SEARCH")
			book.displayList();
		else if(input == "EXIT")
		{
			std::cout << "Okey-dokey! See ya!" << std::endl;
			break;
		}
	}
	return(0);
}
