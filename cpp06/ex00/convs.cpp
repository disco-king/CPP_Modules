#include "convert.hpp"

void print_error(int code)
{
	if (code == 0)
		std::cout << "non displayable" << std::endl;
	if (code == -1 || code == -3)
		std::cout << "impossible" << std::endl;
	if (code == -2)
		std::cout << "extra symbols" << std::endl;
}

double get_double_value(void *ptrs[4], int type)
{
	double *d;
	float *f;

	if (type == 2)
	{
		f = static_cast<float *>(ptrs[type]);
		return *f;
	}
	d = static_cast<double *>(ptrs[3]);
	return *d;
}

void print_char(void *ptrs[4], int type)
{
	std::cout << "char: ";
	if (type < 0)
		return print_error(type);

	char c;

	if(type == 0)
		c = *(static_cast<char *>(ptrs[0]));
	else if(type == 1)
	{
		int i = *(static_cast<int *>(ptrs[1]));
		if(i >= 0 && i < 128)
			c = static_cast<char>(i);
	}
	else
	{
		double d = get_double_value(ptrs, type);
		if(d <= 0 || d > 127)
			return print_error(-1);
		c = static_cast<char>(static_cast<int>(d));
	}

	if(!isprint(c))
		return print_error(0);

	std::cout << '\'' << c << '\'' << std::endl;
}

void print_int(void *ptrs[4], int type)
{
	std::cout << "int: ";
	if (type < 0)
		return print_error(type);

	if(type > 1)
	{

		double check = get_double_value(ptrs, type);
		if (check > MAX_INT || check < MIN_INT)
			return print_error(-1);
		else
			std::cout << static_cast<int>(check) << std::endl;
	}
	else if (type == 0)
		return print_error(-1);
	else
		std::cout << *(static_cast<int *>(ptrs[type])) << std::endl;
}

void print_float(void *ptrs[4], int type)
{
	std::cout << "float: ";
	if (type < 0 && type != -3)
		return print_error(type);

	if(type == 0)
		return print_error(-1);

	float f;

	if (type == 1)
		f = static_cast<float>(*(static_cast<int *>(ptrs[type])));
	else
		f = static_cast<float>(get_double_value(ptrs, type));

	if(std::isinf(f))
		std::cout << std::showpos;
	std::cout << f << 'f' << std::endl;
	std::cout << std::noshowpos;
}

void print_double(void *ptrs[4], int type)
{
	std::cout << "double: ";

	if (type < 0 && type != -3)
		return print_error(type);

	if(type == 0)
		return print_error(-1);

	double d;

	if (type == 1)
		d = static_cast<double>(*(static_cast<int *>(ptrs[type])));
	else
		d = static_cast<double>(get_double_value(ptrs, type));
	if(std::isinf(d))
		std::cout << std::showpos;
	std::cout << d << std::endl;
}