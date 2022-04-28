#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"
#include <iostream>

class Phonebook {

	Contact contacts[8];
	int count;
	int oldest;

	int getGoal() const;
	void setValues();
	void printList() const;
	bool checkNumber(int &) const;

public:

	Phonebook(void);
	bool newContact();	
	void displayName(int) const;
	void displayList() const;
	std::string getString() const;

};

#endif
