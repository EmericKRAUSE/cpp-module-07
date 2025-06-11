#pragma once
#include "Array.hpp"

template <typename T>
Array<T>::Array()
	: _elements(NULL), _size(0)
{

}

template <typename T>
Array<T>::Array(unsigned int n)
	: _elements(new T[n]), _size(n)
{
	
}

template <typename T>
Array<T>::Array(const Array<T> &obj)
	: _elements(NULL), _size(0)
{
	*this = obj;
}

template <typename T>
Array<T>::~Array()
{
	delete [] this->_elements;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &obj)
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
T &Array<T>::operator[](unsigned int index) const
{
	if (index >= _size)
		throw Array<T>::OutOfBounds();
	return _elements[index];
}

template <typename T>
unsigned int Array<T>::size() const
{
	return (this->_size);
}

template <typename T>
const char *Array<T>::OutOfBounds::what() const throw()
{
	return (RED"Index out of bounds"RESET);
}