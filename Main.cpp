#include <stdio.h>
#include "Lib2.hpp"

int main()
{
	int a,b,c;
	printf("Dammi i due valori. \n x= ");
	scanf("%d",&a);
	printf("y=");
	scanf("%d",&b);
	c = sum(a,b);
	printf("c=%d",c);
}
/*
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



*/
