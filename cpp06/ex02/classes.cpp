#include "classes.hpp"

Base::~Base(){};

Base *generate(void)
{
	int i = rand() % 3;
	if (i == 0)
	{
		std::cout << "generating type A" << std::endl;
		return new A;
	}
	if (i == 1)
	{
		std::cout << "generating type B" << std::endl;
		return new B;
	}
	std::cout << "generating type C" << std::endl;
	return new C;
}

void identify(Base* p)
{
	std::cout << "pointer identified as ";
	if(A *a = dynamic_cast<A*>(p))
		std::cout << "type A" << std::endl;
	else if(B *a = dynamic_cast<B*>(p))
		std::cout << "type B" << std::endl;
	else if(C *a = dynamic_cast<C*>(p))
		std::cout << "type C" << std::endl;
	else
		std::cout << "Unrelated type";
}

void identify(Base& p)
{
	std::cout << "reference identified as ";
	try
	{
		A &a = dynamic_cast<A&>(p);
		std::cout << "type A" << std::endl;
		return;
	}

	catch(const std::exception& e){}
	try
	{
		B &b = dynamic_cast<B&>(p);
		std::cout << "type B" << std::endl;
		return;
	}
	catch(const std::exception& e){}

	try
	{
		C &c = dynamic_cast<C&>(p);
		std::cout << "type C" << std::endl;
		return;
	}
	catch(const std::exception& e){}

	std::cout << "Unrelated type" << std::endl;
}