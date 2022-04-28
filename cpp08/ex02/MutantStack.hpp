#pragma once

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{

public:

	typedef typename std::stack<T>::container_type::iterator iterator;

	MutantStack();
	MutantStack(MutantStack const &);
	~MutantStack();

	MutantStack & operator=(MutantStack const &);

	iterator begin();
	iterator end();

};


#include "MutantStack.tpp"