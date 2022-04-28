#include "Contact.hpp"

bool Contact::setNumber(std::string str) {

	for (std::string::iterator i = str.begin(); i < str.end(); i++)
		if(!isdigit(*i))
			return (true);

	this->number = str;
	return (false);
}

bool Contact::setPhrase(std::string str) {

	std::string::iterator i;
	for (i = str.begin(); i < str.end(); i++)
		if(!isspace(*i))
			break ;

	if (i == str.end())
		return(true);
	this->secret = str;
	return (false);
}

bool Contact::setName(std::string str, int pos) {

	if (str.length() == 0)
			return (true);

	if (pos == 3)
		return setNumber(str);

	if(pos == 4)
		return setPhrase(str);

	for (std::string::iterator i = str.begin(); i < str.end(); i++)
	{
		if(!isalpha(*i))
			return (true);
	}

	switch (pos)
	{
	case 0:
		this->name = str;
		break;
	case 1:
		this->surname = str;
		break;
	case 2:
		this->nick = str;
		break;
	}

	return (false);
}

std::string Contact::getInfo(int pos) const{
	switch (pos)
	{
	case 0:
		return this->name;
	case 1:
		return this->surname;
	case 2:
		return this->nick;
	case 3:
		return this->number;
	default:
		return this->secret;
	}
}

void Contact::copyContact(const Contact & src){
	for (int i = 0; i < 5; i++)
		this->setName(src.getInfo(i), i);
}