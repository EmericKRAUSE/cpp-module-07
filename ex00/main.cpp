#include "../colors.hpp"
#include <iostream>
#include "swap.hpp"
#include "min.hpp"
#include "max.hpp"

int main()
{
	//	##########
	//	SWAP
	{
		char a, b;
		a = 'a';
		b = 'b';
		std::cout << GRN << "Before swap:\n"
				  << CYN << "a: " << RESET
				  << a << "\n"
				  << CYN << "b: " << RESET
				  << b << std::endl;
		swap(a, b);
		std::cout << GRN << "After swap:\n"
				  << CYN << "a: " << RESET
				  << a << "\n"
				  << CYN << "b: " << RESET
				  << b << std::endl;

		double da, db;
		da = 0.0001;
		db = 1.0000;
		std::cout << GRN << "Before swap:\n"
				  << CYN << "a: " << RESET
				  << da << "\n"
				  << CYN << "b: " << RESET
				  << db << std::endl;
		swap(da, db);
		std::cout << GRN << "After swap:\n"
				  << CYN << "a: " << RESET
				  << da << "\n"
				  << CYN << "b: " << RESET
				  << db << std::endl;
	}
	//	##########
	//	MIN
	{
		int a, b;
		a = 2;
		b = 5;
		std::cout << GRN << "min function:\n"
				  << CYN << "a: " << RESET
				  << a << "\n"
				  << CYN << "b: " << RESET
				  << b << "\n"
				  << CYN "min result: " << RESET
				  << min(a, b) << std::endl;

		char ca, cb;
		ca = 'a';
		cb = 'z';
		std::cout << GRN << "min function:\n"
				  << CYN << "a: " << RESET
				  << ca << "\n"
				  << CYN << "b: " << RESET
				  << cb << "\n"
				  << CYN "min result: " << RESET
				  << min(ca, cb) << std::endl;
	}
	//	##########
	//	MAX
	{
		int a, b;
		a = 2;
		b = 5;
		std::cout << GRN << "max function:\n"
				  << CYN << "a: " << RESET
				  << a << "\n"
				  << CYN << "b: " << RESET
				  << b << "\n"
				  << CYN "max result: " << RESET
				  << max(a, b) << std::endl;

		char ca, cb;
		ca = 'a';
		cb = 'z';
		std::cout << GRN << "max function:\n"
				  << CYN << "a: " << RESET
				  << ca << "\n"
				  << CYN << "b: " << RESET
				  << cb << "\n"
				  << CYN "max result: " << RESET
				  << max(ca, cb) << std::endl;
	}
	{
		int a = 2;
		int b = 3;
		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
		std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
		std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
		return 0;
	}
	return (0);
}