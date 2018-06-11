// Segregate even & odd nodes

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

Node* segregate_even_odd(Node* head)
{
	if(head == NULL) return NULL;

	Node* cur = head;
    Node* even = NULL;                
    Node* st = NULL;                
    Node* odd = NULL;
    Node* join = NULL;             
	while(cur!=NULL)
	{
		if(cur->data%2==0)
		{
			if(even == NULL)
			{
				st = cur;
				even = cur;
			}
			else
			{
				even->next = cur;
				even = even->next;
			}
		}
		else
		{
			if(odd == NULL)
			{
				odd = cur;
				join = cur;
			}
			else
			{
				odd->next = cur;
				odd = odd->next;
			}
		}
		cur = cur->next;
	}

	even->next = join;

	return st;
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
	Node* even_odd = segregate_even_odd(tree);
    printll(even_odd);
	return 0;	
}