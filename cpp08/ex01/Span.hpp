#pragma once

#include <vector>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <exception>


class Span
{

private:
	std::vector<int> content;
	unsigned int N;
	bool sorted;

	void checkSort();

public:

	Span();
	Span(unsigned int N);
	Span(Span const &);
	~Span();

	void addNumber(int num);
	void addRange(int number, int start = 1);
	void printContent() const;
	void getData() const;
	int shortestSpan();
	int longestSpan();

	Span & operator=(Span const &);

	class SizeException;
};

class Span::SizeException : public std::exception
{
public:
	virtual const char *what() const throw();
};