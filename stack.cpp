#include <iostream>

int main()
{
	double a;
	double b;
	double c;

	std::cout << "a: " << std::addressof(a) << std::endl;
	std::cout << "b: " << std::addressof(b) << std::endl;
	std::cout << "c: " << std::addressof(c) << std::endl;
}