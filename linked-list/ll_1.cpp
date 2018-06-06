// Inserting a node

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

Node* insert_node_start(Node* head)
{
	int x;
	cin>>x;
	Node* newnode = new Node(x);
    newnode->next = head;
    return newnode;
} 

Node* insert_node_btw(Node* head,int s)
{
	int x;
	cin>>x;
	Node* newnode = new Node(x);
	int count = 0;
	Node* cur = head;
	Node* prevnode = cur;
	while(cur!=NULL)
	{
		prevnode = cur;
		cur = cur->next;
		count++;
		if(count == s) break;
	}

	prevnode->next = newnode;
	newnode->next = cur;
	return head;
}

Node* insert_at_end(Node* head)
{
	int x;
	cin>>x;
	Node* newnode = new Node(x);
	Node* cur = head;
	while(cur->next != NULL)
	{
		cur = cur->next;
	}
	cur->next = newnode;
	return head;
}

void printll(Node* head)
{
	if(head==NULL) return;

	Node* cur = head;

	while(cur!=NULL)
	{
		cout<<cur->data<<" ";
		cur = cur->next;
	} 
}

int main()
{
	Node* head = createll();
	//Node* insert = insert_node_start(head);
	//Node* insert = insert_node_btw(head,3);
	Node* insert = insert_at_end(head);
    printll(insert);
	return 0;
}