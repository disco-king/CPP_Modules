#include "Span.hpp"

Span::Span() : N(0){

	sorted = false;
}

Span::Span(unsigned int N) : N(N){

	sorted = false;
}

Span::~Span() {}

Span::Span(Span const & src){

	*this = src;
}

Span &Span::operator=(Span const & src){

	std::vector<int>::const_iterator begin = src.content.begin();
	std::vector<int>::const_iterator end = src.content.end();

	content.assign(begin, end);
	N = content.size();
	sorted = src.sorted;
	return *this;
}

void Span::addNumber(int num)
{
	if (content.size() == N)
		throw SizeException();

	content.push_back(num);
	sorted = false;
}

void Span::printContent() const{

	std::vector<int>::const_iterator i;

	for (i = content.begin(); i < content.end(); i++)
	{
		std::cout << *i << ' ';
	}
	std::cout << std::endl;
}

void Span::getData() const{

	std::cout << "size " << content.size()
	<< " capacity " << N << std::endl;
}

void Span::checkSort(){
	if(!sorted)
	{
		std::sort(content.begin(), content.end());
		const_cast<bool &>(sorted) = true;
	}
}

int Span::longestSpan(){

	if(content.size() < 2)
		throw SizeException();

	checkSort();
	return *(content.end() - 1) - *(content.begin());
}

int Span::shortestSpan() {
	
	if(content.size() < 2)
		throw SizeException();

	checkSort();

	std::vector<int>::const_iterator i = content.begin() + 1;
	std::vector<int>::const_iterator end = content.end();
	int buff;
	int span = abs(*i - *(i - 1));
	while (++i < end)
	{
		buff = abs(*i - *(i - 1));
		if(span > buff)
			span = buff;
	}
	return span;
}

void Span::addRange(int number, int start)
{
	if(N - content.size() < number)
		throw SizeException();

	for(int i = 0; i < number; i++)
		content.push_back(start + i);
}

const char *Span::SizeException::what() const throw(){
	return "span size error";
}
