#include "Span.hpp"

int main()
{
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}
	std::cout << std::endl;
{
	Span sp(10000);
	// Span sp(9999);

	try { std::cout << sp.shortestSpan() << std::endl; }
	catch(std::exception & e){ std::cerr << e.what() << '\n'; }
	try { std::cout << sp.longestSpan() << std::endl; }
	catch(std::exception & e){ std::cerr << e.what() << '\n'; }

	sp.addNumber(1);
	sp.addNumber(2);
	sp.addNumber(3);

	try
	{
		sp.addRange(9997, -15);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		exit(1);
	}
	try { std::cout << sp.shortestSpan() << std::endl; }
	catch(std::exception & e){ std::cerr << e.what() << '\n'; }
	try { std::cout << sp.longestSpan() << std::endl; }
	catch(std::exception & e){ std::cerr << e.what() << '\n'; }
}
	return 0;
}


// int main(int argc, char const *argv[])
// {
// 	int size = 5;
// 	Span sp1(size);
// 	Span sp2;

// 	sp1.getData();
// 	sp2.getData();

// 	sp1.addRange(5);

// 	try {sp2 = sp1;}
// 	catch (std::exception &e) { std::cout << e.what() << '\n';}
// 	try {sp1.addNumber(10);}
// 	catch (std::exception &e) { std::cout << e.what() << '\n';}

// 	sp1.getData();
// 	sp2.getData();

// 	sp2.printContent();

// 	return 0;
// }
