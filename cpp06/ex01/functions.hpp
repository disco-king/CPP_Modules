#pragma once

#include <iostream>

typedef unsigned long uintptr_t;

struct Data
{
	std::string str;
	int i;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);