// Length of detected loop

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

Node* detect_loop(Node* head)
{
	if(head==NULL) return NULL;

	Node*first = head;
	Node*second = head->next;
	while(second->next && second->next->next)
	{
		first = first->next;
		second = second->next->next;
		if(first == second)
		{
			return first;
		}
	}

	return NULL;
}

int length_ll(Node* head)
{
	if(head == NULL) return 0;

	Node* cur = head;
    int count = 0;
	while(cur!=NULL)
	{
		cur = cur->next;
		count++;
	}

	return count;
}

void create_loop(Node* head,int length)
{
	srand(time(0));

	int a = (rand()%(length))+1;
	int b = (rand()%(length))+1;
    cout<<a<<" "<<b<<endl;
	Node* first = head;
	Node* second = head;
    a--;
    b--;
	while(a--)
	{
		first = first->next;
		//cout<<first->data<<" ";
	}
	while(b--)
	{
		second = second->next;
		//cout<<second->data<<" ";
	}

	second->next = first;
}

int length_loop(Node* first)
{
	int count = 0;
    Node*point = first;
	while(true)
	{
		if(first==point && count!=0) return count;
		first = first->next;
		count++;
	}
}

void printll(Node* head)
{
	if(head == NULL) return;
	Node* cur = head;
    int t = 20;
	while(t--)
	{
		cout<<cur->data<<" ";
		cur = cur->next;
	}
	cout<<endl;
}

int main()
{
	Node* tree = createll();
	int length = length_ll(tree);
	create_loop(tree,length);
	printll(tree);
	Node* first = detect_loop(tree);
	if(first!=NULL)
	{
		cout<<length_loop(first)<<endl;
	}
	else
	{
		cout<<"No detected loop"<<endl;
	}
	return 0;	
}