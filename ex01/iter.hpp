#ifndef ITER_HPP
#define ITER_HPP

template <typename T>
void	iter(T *array, int length, void func (T &))
{
	int i = 0;
	while (i < length)
		func(array[i++]);
}

#endif