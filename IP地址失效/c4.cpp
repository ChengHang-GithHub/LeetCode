#include<iostream>
#include"h4.h"
#include<iostream>
using namespace std;
void Ip::acquire(string s)
{
	address = s;
}
string Ip::transform()
{
	for (int i = 0; i <= address.length() - 1; i++)
	{
		if (address[i] == '.')
		{
			address.replace(i, 1, "[.]");//调用string类函数
			i = i + 2;
		}
	}
	return address;
}
int main()
{
	string s = "12.325.256.25";
	string re;
	Ip    p;
	p.acquire(s);
	re = p.transform();
	cout << "the result is :" << re << endl;
	getchar();
}

/*常用的string类函数还有：
1.replace:
string &replace(int p0, int n0, const string &s，int n);//删除从p0开始的n0个字符，然后在p0处插入串s的前那个元素；
2.insert:
string &insert(int p0,const string &s, int pos, int n);//在p0位置插入字符串s中pos开始的前n个字符
3.erease:
string &erase(int pos = 0, int n = npos);//删除pos开始的n个字符，返回修改后的字符串
4.append:
string &append(const string &s,int pos,int n);//把字符串s中从pos开始的n个字符连接到当前字符串的结尾
5.assign()
string &assign(const string &s,int start,int n);//把字符串s中从start开始的n个字符赋给当前字符串
6.
int size()const;        //返回当前字符串的大小
int length()const;       //返回当前字符串的长度
bool empty()const;        //当前字符串是否为空
void resize(int len,char c);//把字符串当前大小置为len，并用字符c填充不足的部分
*/








//