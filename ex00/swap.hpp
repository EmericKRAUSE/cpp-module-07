#ifndef SWAP_HPP
# define SWAP_HPP

template <typename T>

void swap(T &p1, T &p2)
{
	T temp;

	temp = p1;
	p1 = p2;
	p2 = temp;
}

#endif