#pragma once
#include <cstddef>
#include <exception>
#include <iostream>
#include <string>

template <typename T>
class Array
{
	private:
		//	##########
		//	Attributes
		T*				_elements;
		unsigned int	_size;
	public:
		//	##########
		//	Constrcutor & destructor
		Array();
		Array(unsigned int n);
		Array(const Array &obj);
		~Array();

		//	##########
		//	Operators
		Array &operator=(const Array &obj);
		T &operator[](unsigned int index) const;

		//	##########
		//	Methodes
		unsigned int size() const;

		//	##########
		//	Exceptions
		class OutOfBounds : public std::exception
		{
			public:
				const char *what() const throw();
		};
};

#include "Array.tpp"