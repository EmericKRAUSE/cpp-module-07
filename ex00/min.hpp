#ifndef MIN_HPP
# define MIN_HPP

template <typename T>

T min(T &p1, T &p2)
{
	if (p1 < p2)
		return (p1);
	else
		return (p2);
}

#endif