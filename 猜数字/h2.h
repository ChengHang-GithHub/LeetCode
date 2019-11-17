#include<iostream>
#include<vector>
using namespace std;
class Solution1
{
private:
	vector<int> guess;
	vector<int> number;

public:
	int count();
	void acquire(vector<int> g, vector<int> n);
};
