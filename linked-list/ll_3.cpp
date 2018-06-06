// Length of linked list

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

int length_iterative(Node* head)
{
	if(head == NULL) return 0;
    int count = 0;
    Node* cur = head;
	while(cur!=NULL)
	{
		cur = cur->next;
		count++;
	}
	return count;
}

int length_recursive(Node* head)
{
	if(head == NULL) return 0;
    int length = 1 + length_recursive(head->next);
    return length;
}

int main()
{
	Node* head = createll();
	cout<<length_iterative(head)<<endl;
	cout<<length_recursive(head)<<endl;
	return 0;
}