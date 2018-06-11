// Reverse linked list

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
	int data;
	Node* next;
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

Node* reverse_ll(Node* head)
{
	if(head == NULL) return NULL;

	Node* ahead = NULL;
	Node* cur = head;
	Node* prevnode = NULL;
    
    while(cur!=NULL)
    {
    	ahead = cur->next;
    	cur->next = prevnode;
    	prevnode = cur;
    	cur = ahead;
    }
    return prevnode;
}

void printll(Node* head)
{
	if(head == NULL) return;

	Node* cur = head;

	while(cur!=NULL)
	{
		cout<<cur->data<<" ";
		cur = cur->next;
	}
	cout<<endl;
}

int main()
{
	Node* tree = createll();
    printll(tree);
	Node* reverse = reverse_ll(tree);
    printll(reverse);
	return 0;	
}