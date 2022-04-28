#pragma once

#include <iterator>
#include <exception>
#include <algorithm>
#include <iostream>


template <typename T>
int &easyfind(T &cont, int i)
{
	typename T::iterator res;
	typename T::iterator it = cont.begin();
	typename T::iterator end = cont.end();

	res = std::find(it, end, i);
	if(res == end)
		throw std::out_of_range("item not found");
	return *res;
}

template <typename T>
void easyprint(T cont)
{
	typename T::const_iterator it;
	typename T::const_iterator end = cont.end();

	for (it = cont.begin(); it != end; it++)
		std::cout << *it << ' ';
	std::cout << std:: endl;
}
