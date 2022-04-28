#include <cmath>
#include <iostream>
#include "iter.hpp"

void iterd(std::string &str)
{
	str += " is iter'd";
}

void sqrtd(int &num)
{
	num = sqrt(num);
}

int main()
{
{
	int iarr[4] = {1, 4, 9, 16};
	std::string sarr[4] = {"string1", "string2", "string3", "string4"};

	iter(iarr, 4, sqrtd);
	iter(sarr, 4, iterd);

	for (int i = 0; i < 4; i++)
	{
		std::cout << iarr[i] << ' ';
	}

	std::cout << std::endl;

	for (int i = 0; i < 4; i++)
	{
		std::cout << sarr[i] << std::endl;
	}
}

	std::cout << std::endl;

{
	int iarr[4] = {1, 4, 9, 16};
	std::string sarr[4] = {"string1", "string2", "string3", "string4"};

	iter(iarr, 4, doubled<int>);
	iter(sarr, 4, doubled<std::string>);

	for (int i = 0; i < 4; i++)
	{
		std::cout << iarr[i] << ' ';
	}

	std::cout << std::endl;

	for (int i = 0; i < 4; i++)
	{
		std::cout << sarr[i] << std::endl;
	}
}

	return 0;
}
