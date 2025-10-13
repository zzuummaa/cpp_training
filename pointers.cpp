#include <iostream>
#include <array>

int main()
{
	std::array<int, 256> arr{};

	std::cout << "sizeof(arr): " << sizeof(arr) << " bytes" << std::endl;
	std::cout << std::endl;
	std::cout << "address of arr:         " << std::addressof(arr) << std::endl;

	{
		std::array<int, 256> arr_copy = arr;
		std::cout << "address of arr_copy:    " << std::addressof(arr_copy) << std::endl;
	}

	{
		std::array<int, 256>* arr_pointer = &arr;
		std::cout << "address of arr_pointer: " << &arr_pointer << std::endl;
	}

	/**
	 * | 0-7 байты   | 8-1031 байты | 1032-2055 байты |
	 * | arr_pointer | arr          | arr_copy        |
	 */
}