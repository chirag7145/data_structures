// Intersection of two ll

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

Node* intersectional_arrays(Node* head1,Node* head2)
{
	if(head1 ==NULL || head2==NULL) return NULL;

	Node* cur1 = head1;
	Node* cur2 = head2;
    Node* head = NULL;
    Node* tail = NULL;
	while(cur1 && cur2)
	{
		if(cur1->data == cur2->data)
		{
			if(head == NULL)
			{
				head = cur1;
				tail = cur1; 
			}
			else
			{
				tail->next = cur1;
				tail = tail->next;
			}
			cur1 = cur1->next;
			cur2 = cur2->next;
		}
		else if(cur1->data > cur2->data) cur2 = cur2->next;
		else cur1 = cur1->next;
	}

	tail->next = NULL;
	return head;
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
	Node* head1 = createll();
	Node* head2 = createll();
	Node* head = intersectional_arrays(head1,head2);
	printll(head);

	return 0;	
}