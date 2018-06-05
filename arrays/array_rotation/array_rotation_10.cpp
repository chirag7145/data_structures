#include <bits/stdc++.h>
using namespace std;

void input(int arr[],int n)
{
	for(int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
}

void output(int arr[],int n)
{
	for(int i = 0; i < n; i++)
	{
		cout<<arr[i]<<" ";
	}
}

void reverse_array(int arr[],int st,int end)
{
	for(int i = 0; i <= (end-st)/2; i++)
	{
		if((end-st)%2==0) 
		{
			if(i==(end-st)/2) break;
		}

		arr[i+st] = arr[i+st]^arr[end-i];
		arr[end-i] = arr[i+st]^arr[end-i];
		arr[i+st] = arr[i+st]^arr[end-i];
	}
}

void rotate_left(int arr[],int end,int k)
{
	reverse_array(arr,0,end);
	reverse_array(arr,0,k-1);
	reverse_array(arr,k,end);
}

void rotate_right(int arr[],int end,int k)
{
	reverse_array(arr,0,end);
	reverse_array(arr,0,end-k);
	reverse_array(arr,end-k+1,end);
}

void sum_range(int arr[],int l,int r)
{
	int sum = 0;
	for(int i = l; i <= r; i++)
	{
		sum+=arr[i];
	}
	cout<<sum<<endl;
}
int main()
{
	int arr[100];
	int n,q,q_no,x,y;

	cin>>n;
	cin>>q;
	
    input(arr,n);
	while(q--)
	{
		cin>>q_no;
		if(q_no==1) 
		{
			cin>>x;
			rotate_left(arr,n-1,x);
		}
		else if(q_no==2) 
		{
			cin>>x;
			rotate_right(arr,n-1,x);
		}
		else
		{
			cin>>x>>y;
			sum_range(arr,x,y);
		} 
	}

	return 0;
}