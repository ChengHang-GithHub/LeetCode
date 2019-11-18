#include <iostream>
#include"h5.h"
using namespace std;
void List::establish_list(int n)
{
	int m = 1;
	int i;
	head = new Node;
	Node* x;
	x = head;

	for (i = 0; i <= n - 1; i++)
	{
		Node* p;
		p= new Node;
		p->data = m;
		x->next = p;
		x = p;
		m++;
	}
	head = head->next;
	
	Node* s;
	s = head->next;
	while(s->next!=NULL)
	{
		cout << s->data << endl;
		s = s->next;
	}
}
int main()
{
    List L;
	L.establish_list(5);
	getchar();
	return 0;
}





























