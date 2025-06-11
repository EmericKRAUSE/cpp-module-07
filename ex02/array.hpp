#pragma once
#include <cstddef>
#include <exception>
#include <iostream>
#include <string>

template <typename T>
class array
{
	private:
		//	##########
		//	Attributes
		T*				_elements;
		unsigned int	_size;
	public:
		//	##########
		//	Constrcutor & destructor
		array();
		array(unsigned int n);
		array(const array &obj);
		~array();

		//	##########
		//	Operators
		array &operator=(const array &obj);
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

#include "array.tpp"