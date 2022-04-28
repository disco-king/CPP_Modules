#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {

	std::string name;
	std::string surname;
	std::string number;
	std::string nick;
	std::string secret;

public:

	bool setName(std::string, int);
	bool setNumber(std::string);
	bool setPhrase(std::string);
	std::string getInfo(int) const;
	void copyContact(const Contact &);

};
#endif
