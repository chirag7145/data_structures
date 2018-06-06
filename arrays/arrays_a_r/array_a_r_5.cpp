// Find the largest 3 elements in the given array

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
	int z = -1000000000;

	for (int i = 0; i < n; i++)
	{
		if(arr[i]>x)
		{
			z = y;
			y = x;
			x = arr[i];
		} 
		else if(arr[i]>y)
		{
			z = y;
			y = arr[i];
		}
		else if(arr[i]>z)
		{
			z = arr[i];
		}
		else
		{
			x = x;
			y = y;
			z = z;
		}
	}
	cout<<x<<" "<<y<<" "<<z<<endl;
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