// No. of times a given no. appears

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

int no_count(Node* head,int x)
{
	if(head == NULL) return 0;

	Node* cur = head;
	int count = 0;

	while(cur!=NULL)
	{
		if(cur->data == x) count++;
		cur = cur->next;
	}
	return count;
}

 int main()
 {
 	Node* head = createll();
 	int x;
 	cin>>x;
    cout<<no_count(head,x);
 	cout<<endl;
 	return 0;
 }