#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};
class List
{
private:
	Node* head;
public:
	void establish_list(int n);
	//void delete_node(Node* d);
	//void ouput_node(int i);
	//void insert_node(int i);
};
