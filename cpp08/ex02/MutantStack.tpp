#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack() {}

template <typename T>
MutantStack<T>::~MutantStack() {}

template <typename T>
MutantStack<T>::MutantStack(MutantStack const & src){}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack<T> const & src){

	iterator begin = this->begin();
	iterator end = this->begin();

	for_each(begin, end, this->push());
	return *this;
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(){
	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(){
	return this->c.end();
}
