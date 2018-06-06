// Delete the given node

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

Node* delete_node_start(Node* head)
{
	head = head->next;
    return head;
} 

Node* delete_node_btw(Node* head,int s)
{
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

	prevnode->next = cur->next;
	return head;
}

Node* delete_at_end(Node* head)
{
	Node* cur = head;
	while(cur->next->next != NULL)
	{
		cur = cur->next;
	}
	cur->next = NULL;
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
	Node* insert = delete_at_end(head);
	//Node* insert = delete_node_btw(head,3);
	//Node* insert = delete_node_start(head);
    printll(insert);
	return 0;
}