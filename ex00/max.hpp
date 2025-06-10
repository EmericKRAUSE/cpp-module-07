#ifndef MAX_HPP
# define MAX_HPP

template <typename T>

T max(T &p1, T &p2)
{
	if (p1 > p2)
		return (p1);
	else
		return (p2);
}

#endif