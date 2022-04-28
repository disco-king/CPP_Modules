#include "convert.hpp"

bool check_int(const char *str)
{
	int i = 0, len = strlen(str);
	if(str[i] == '-')
		i++;
	for (; i < len; i++)
	{
		if(!isdigit(str[i]))
			return false;
	}
	return true;
}

int get_type(const char * argv)
{
	char *ptr;
	double d = strtod(argv, &ptr);

	if (d != d || std::isinf(d))
		return -3;
	try{ std::stoi(argv); }
	catch (std::invalid_argument &e)
	{
		if(strlen(argv) < 2)
			return 0;		//char
		return -1;			//nonsense
	}
	catch (std::out_of_range &e){}

	std::string leftover = ptr;
	if(check_int(argv))
		return 1;			//int
	if(leftover == "f")
		return 2;			//float
	if(leftover == "")
		return 3;			//double
	return -2;				//extra chars
}

void print_type(int type)
{
	std::cout << "original type: ";
	switch (type)
	{
	case 0:
		std::cout << "char" << std::endl;
		break;
	case 1:
		std::cout << "int" << std::endl;
		break;
	case 2:
		std::cout << "float" << std::endl;
		break;
	case 3:
		std::cout << "double" << std::endl;
		break;
	case -3:
		std::cout << "float or double value" << std::endl;
		break;
	default:
		std::cout << "not defined" << std::endl;
	}
	std::cout << std::endl;
}


int main(int argc, char const *argv[])
{
	if (argc != 2)
		return 0;

	char c;
	int i;
	float f;
	double d;
	void *ptrs[4] = {static_cast<void *>(&c), static_cast<void *>(&i),
					static_cast<void *>(&f), static_cast<void *>(&d)};

	int type = get_type(argv[1]);

	if(type == 0)
		c = argv[1][0];
	else if(type == 1)
		i = std::stoi(argv[1]);
	else if(type == 2)
		f = strtod(argv[1], 0);
	else if(type == 3)
		d = strtod(argv[1], 0);
	else if(type == -3)
	{
		f = strtod(argv[1], 0);
		d = strtod(argv[1], 0);
	}

	print_type(type);

	print_char(ptrs, type);
	print_int(ptrs, type);
	std::cout << std::fixed << std::setprecision(1);
	print_float(ptrs, type);
	print_double(ptrs, type);

	return 0;
}
