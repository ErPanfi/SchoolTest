#include "Lib2.hpp"

int sum(int x, int y)
{
	int ret = x;
	for(int i = 0; i < y; i++)
	{
		ret = increment(ret);
	}
	return ret;
}

int increment(int x)
{
	return ++x;
}

