#include "Array.hpp"

template <typename T>
Array<T>::Array() : len(0){

	arr = 0;
}

template <typename T>
Array<T>::~Array() {

	if(arr)
		delete [] arr;
}

template <typename T>
Array<T>::Array(unsigned int n) : len(n){

	arr = new T[n];
}

template <typename T>
Array<T>::Array(Array const & src) :
len(src.len){

	arr = new T[src.len];
	*this = src;
}

template <typename T>
Array<T> &Array<T>::operator= (Array<T> const & src){

	if (len == 0)
	{
		arr = new T[src.len];
		const_cast<int &>(len) = src.len;
	}

	int i = 0;
	for (; i < len && i < src.len; i++)
	{
		this->arr[i] = src.arr[i];
	}

	return *this;
}

template <typename T>
int Array<T>::size() const{

	return len;
}

template <typename T>
T &Array<T>::operator[] (int index)
{
	if(index < 0 || index >= len)
		throw Array<T>::RangeException();
	return arr[index];
}

template <typename T>
const char* Array<T>::RangeException::what() const throw(){
	return "out of range";
}