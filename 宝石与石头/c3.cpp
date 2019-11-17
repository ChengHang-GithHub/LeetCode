#include<iostream>
#include<string>
#include"h3.h"
using namespace std;

void Stone::acquire(string a,string b)
{
	J = a;
	S = b;
}
int Stone::number()
{
	int a = J.length();
	int b = S.length();
	int sum = 0;
	for(int i = 0;i <= b-1;i++)
		for (int j = 0; j <= a - 1; j++)
		{
			if (J[j] == S[i])
			{
				sum++;
				break;
			}

		}
	return sum;
}
int main()
{
	int cc = 0;
	string a = "aghkl";
	string b = "asdadrhjskjykklhdf";
	Stone st;
	st.acquire(a, b);
	cc=st.number();
	cout << "the result is:" << cc << endl;
	getchar();
}