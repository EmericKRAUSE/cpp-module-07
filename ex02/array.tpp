#pragma once
#include "array.hpp"

template <typename T>
array<T>::array()
	: _elements(NULL), _size(0)
{

}

template <typename T>
array<T>::array(unsigned int n)
	: _elements(new T[n]), _size(n)
{
	// for (unsigned int i = 0; i < this->size(); i++)
	// 	_elements[i] = T();
}

template <typename T>
array<T>::array(const array<T> &obj)
	: _elements(NULL), _size(0)
{
	*this = obj;
}

template <typename T>
array<T>::~array()
{
	delete [] this->_elements;
}

template <typename T>
array<T>& array<T>::operator=(const array<T> &obj)
{
	if (this != &obj)
	{
		if (this->_elements != NULL)
			delete [] this->_elements;
		this->_size = obj.size();
		this->_elements = new T[this->_size];
		for (unsigned int i = 0; i < this->size(); i++)
			this->_elements[i] = obj._elements[i];
	}
	return (*this);
}

template <typename T>
T& array<T>::operator[](unsigned int index) const
{
	if (index >= _size)
		throw array<T>::OutOfBounds();
	return _elements[index];
}

template <typename T>
unsigned int array<T>::size() const
{
	return (this->_size);
}

template <typename T>
const char *array<T>::OutOfBounds::what() const throw()
{
	return (RED"Index out of bounds"RESET);
}