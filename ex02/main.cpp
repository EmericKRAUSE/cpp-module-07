#include "../colors.hpp"
#include "Array.hpp"

int main()
{
	{
		std::cout	<< GRN << "Test with an array of int:" << RESET
					<< std::endl;
		Array<int> a(10);
		try
		{
			a[0] = 10;
			std::cout << CYN << "a[0]: " << RESET
					  << a[0] << std::endl;
			Array<int> b(a);
			std::cout << CYN << "b[0]: " << RESET
					  << b[0] << std::endl;
			std::cout << CYN << "b[10]: " << RESET
					  << b[9] << std::endl;
			a[15] = 1;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout	<< GRN << "Test with an array of strings:" << RESET
					<< std::endl;
		Array<std::string> a(10);
		try
		{
			a[0] = "test";
			std::cout	<< CYN << "a[0]: " << RESET
						<< a[0] << std::endl;
			Array<std::string> b(a);
			std::cout << CYN << "b[0]: " << RESET
					  << b[0] << std::endl;
			std::cout << CYN << "b[10]: " << RESET
					  << b[9] << std::endl;
			a[15] = "error";
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}