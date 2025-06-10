#include "../colors.hpp"
#include "iter.hpp"
#include <iostream>

template <typename T>
void	printElement(T &element)
{
	std::cout << element << "\n";
}

template <typename T>
void	increment(T &element)
{
	element++;
}

int main()
{
	int	array[] = {1, 2, 3};
	char array2[] = {'a', 'b' ,'c'};
	double array3[] = {0.1, 0.2, 0.3};
	
	std::cout << CYN << "int:\n" << RESET;
	iter(array, 3, printElement);
	std::cout << "\n";
	iter(array, 3, increment);
	iter(array, 3, printElement);
	std::cout << "\n";

	std::cout << CYN << "char:\n" << RESET;
	iter(array2, 3, printElement);
	std::cout << "\n";
	iter(array2, 3, increment);
	iter(array2, 3, printElement);
	std::cout << "\n";

	std::cout << CYN << "double:\n" << RESET;
	iter(array3, 3, printElement);
	std::cout << "\n";
	iter(array3, 3, increment);
	iter(array3, 3, printElement);
	std::cout << std::endl;
	return (0);
}
