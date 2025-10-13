#include <iostream>
#include <array>

int main()
{
	constexpr size_t arr_size = 4 * 1024 * 1024;
	auto* arr = new std::array<int, arr_size>{};
	std::cout << "Allocate array success" << std::endl;
	return 0;
}
