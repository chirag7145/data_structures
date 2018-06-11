// Mid point of linked list

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

Node* mid_pt(Node*head)
{
	if(head == NULL) return NULL;

	Node* slow = head;
	Node* fast = head;

	while(fast && fast->next && fast->next->next)
	{
		slow = slow->next;
		fast = fast->next->next;
	}

	return slow;
 }

 int main()
 {
 	Node* head = createll();
 	Node* mp = mid_pt(head);
 	cout<<mp<<" "<<mp->data<<" ";

 	return 0;
 }