// Second largest no. in array

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

void largest(int arr[],int n)
{
	int x = -1000000000;
	int y = -1000000000;

	for (int i = 0; i < n; i++)
	{
		if(arr[i]>x)
		{
			y = x;
			x = arr[i];
		} 
		else if(arr[i]>y)
		{
			y = arr[i];
		}
		else
		{
			x = x;
			y = y;
		}
	}
	cout<<y<<endl;
}

int main()
{
	int arr[100];
	int n;
	cin>>n;

	input(arr,n);
    largest(arr,n);

    return 0;
}