#include <iostream>
#include <fstream>

class Replacer
{

	std::ifstream source;
	std::ofstream destination;
	std::string s1;
	std::string s2;
	void replaceThis(size_t, std::string &);
	std::string getNewString(size_t, std::string &);

public:

	Replacer(std::string const &, std::string const &);

	bool getFiles(std::string);
	void Replace();

};
