// Move last element to front

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
	Node*head = NULL;
	Node*tail = NULL;
	while(true)
	{
		cin>>x;
		if(x == -1) break;
		Node* newnode = new Node(x);
		if(head == NULL)
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

Node* l_f(Node*head)
{
	if(head == NULL) return NULL;
    Node* cur = head;
    while(cur->next->next != NULL)
    {
    	cur = cur->next;
    }

    Node* newnode = cur->next;
    cur->next = NULL;
    newnode->next = head;
    head = newnode;
    return head;
 }

void printll(Node* head)
{
	if(head == NULL) return;

	Node* cur = head;

	while(cur != NULL)
	{
		cout<<cur->data<<" ";
		cur = cur->next;
	}
}

 int main()
 {
 	Node* head = createll();
 	Node* lf = l_f(head);
 	printll(lf);
 	cout<<endl;
 	return 0;
 }