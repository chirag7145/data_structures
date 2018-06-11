// Detect loop

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
	// Uncomment the below lines and the loop will be created!!
   	//tail->next = head->next->next;
	//tail = tail->next;
	return head;
}

bool detect_loop(Node* head)
{
	if(head==NULL) return false;

	Node*first = head;
	Node*second = head->next;

	while(second->next && second->next->next)
	{
		first = first->next;
		second = second->next->next;
		if(first == second)
		{
			return true;
		}
	}

	return false;
}

int main()
{
	Node* tree = createll();
	if(detect_loop(tree)) cout<<"1"<<endl;
	else cout<<"0"<<endl;
	return 0;	
}