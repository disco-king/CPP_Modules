#include "functions.hpp"

int main(int argc, char const *argv[])
{
	Data data;
	data.i = 15;
	data.str = "data isn't empty";

	uintptr_t num = serialize(&data);
	Data *ptr = deserialize(num);


	std::cout << "uintptr_t:\t";
	std::cout.setf(std::cout.hex, std::cout.basefield);
	std::cout.setf(std::cout.showbase);
	std::cout << num << std::endl;
	std::cout.unsetf(std::cout.hex);
	std::cout.unsetf(std::cout.showbase);

	std::cout << "Data *:\t\t";
	std::cout << ptr << std::endl;

	std::cout << std::endl;

	std::cout << "int in Data: " << data.i << std::endl
	<< "string in Data: " << data.str << std::endl;
	return 0;
}
