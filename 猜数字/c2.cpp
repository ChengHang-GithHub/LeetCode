#include"h2.h"
#include<iostream>
#include<vector>

using namespace std;

int Solution1::count()
{
	int a = 0;
	for (int i = 0; i <= 2; i++)
		if (guess[i] == number[i])
			a++;
	return a;
}
void Solution1::acquire(vector<int> g, vector<int>n)
{
	guess = g;
	number = n;
}
int main()
{
	int re;
	Solution1 s1;
	vector<int> g = { 1, 2, 3 };
	vector<int> n = { 1, 2, 3 };
	s1.acquire(g, n);
	re=s1.count();
	std::cout << "the result is:" <<re<< std::endl;
	getchar();

	return 0;


}