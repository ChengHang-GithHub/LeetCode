#include<iostream>
#include "h1.h"
int  Solution::reverse()
{
	int arry[50];
	int a=1,b=1;
	int i = 0;
	double n = 0;
	while (b)
	{
		a = x % 10;
		b = x / 10;
		x = b;
		arry[i] = a;
		i++;
	}
	for(int j=0;j<=i-1;j++)
	{
		n = n*10+arry[j];
		if (n > INT_MAX || n < INT_MIN)
			return 0;
	}

	return (int)n;


}
void Solution::acquire(int a)
{
	x = a;
}
int main()
{
	int c;
	Solution S1;
	S1.acquire(123);
	c=S1.reverse();
	std::cout <<"the result is :"<< c;
	getchar();
	return 0;
}