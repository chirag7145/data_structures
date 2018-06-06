// Nth node from back

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

Node* get_node(Node* head,int x)
{
	if(head == NULL) return NULL;

	int count = 0;
    Node* cur = head;
	while(cur!=NULL)
	{
		count++;
		if(count == x) return cur;
		cur = cur->next;
	}

	return NULL;
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
	int x;
	cin>>x;
	int length = length_recursive(head);
	Node* get = get_node(head,length-x+1);
	cout<<get<<" "<<get->data<<endl;
	return 0;
}