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
			address.replace(i, 1, "[.]");//����string�ຯ��
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

/*���õ�string�ຯ�����У�
1.replace:
string &replace(int p0, int n0, const string &s��int n);//ɾ����p0��ʼ��n0���ַ���Ȼ����p0�����봮s��ǰ�Ǹ�Ԫ�أ�
2.insert:
string &insert(int p0,const string &s, int pos, int n);//��p0λ�ò����ַ���s��pos��ʼ��ǰn���ַ�
3.erease:
string &erase(int pos = 0, int n = npos);//ɾ��pos��ʼ��n���ַ��������޸ĺ���ַ���
4.append:
string &append(const string &s,int pos,int n);//���ַ���s�д�pos��ʼ��n���ַ����ӵ���ǰ�ַ����Ľ�β
5.assign()
string &assign(const string &s,int start,int n);//���ַ���s�д�start��ʼ��n���ַ�������ǰ�ַ���
6.
int size()const;        //���ص�ǰ�ַ����Ĵ�С
int length()const;       //���ص�ǰ�ַ����ĳ���
bool empty()const;        //��ǰ�ַ����Ƿ�Ϊ��
void resize(int len,char c);//���ַ�����ǰ��С��Ϊlen�������ַ�c��䲻��Ĳ���
*/








//