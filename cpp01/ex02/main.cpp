#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "string address by var: " << &str << std::endl;
	std::cout << "string address by ptr: " << stringPTR << std::endl;
	std::cout << "string address by ref: " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "string value by var: " << str << std::endl;
	std::cout << "string value by ptr: " << *stringPTR << std::endl;
	std::cout << "string value by ref: " << stringREF << std::endl;

	return 0;
}