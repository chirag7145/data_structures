// Search for an element

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
	Node* next;
	int data;

	Node(int d)
	{
		data = d;
	    next = NULL;
	}
};

Node* createll()
{
	int x;
	Node* head = NULL;
	Node* tail = NULL;
	while(true)
	{
		cin>>x;
		if(x==-1) break;
		Node* newnode = new Node(x);
		if(head==NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = tail->next;
		}
	}

	return head;
}

Node* search_iterative(Node* head,int x)
{
	if(head == NULL) return NULL;

	Node* cur = head;

	while(cur!=NULL)
	{
		if(cur->data == x) return cur;
		cur = cur->next;
	}
}

Node* search_recursive(Node* head,int x)
{
	if(head == NULL) return NULL;

	if(head->data == x) return head;

	return search_recursive(head->next,x);
}

int main()
{
	Node* head = createll();
	int x;
	cin>>x;
	cout<<search_iterative(head,x)<<endl;
	cout<<search_recursive(head,x)<<endl;
}