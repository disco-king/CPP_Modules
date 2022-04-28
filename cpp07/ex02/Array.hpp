#pragma once
#include <exception>

template <typename T>
class Array
{

private:
	T *arr;
	const int len;

public:

	Array<T>();
	Array<T>(unsigned int n);
	Array<T>(Array<T> const & src);
	~Array<T>();

	int size() const;

	Array<T> & operator=(Array<T> const &);
	T &operator[] (int index);

	class RangeException;

};

template <typename T>
class Array<T>::RangeException : public std::exception
{
public:
	virtual const char* what() const throw();
};


#include "Array.tpp"

