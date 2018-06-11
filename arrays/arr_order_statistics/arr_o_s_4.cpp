// Smallest and second smallest no.

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

	cout<<endl;
}

void nos(int arr[],int n)
{
	int x = INT_MAX;
	int y = INT_MAX;

	for (int i = 0; i < n; i++)
	{
		if(x>arr[i])
		{
			y = x;
			x = arr[i];
		}
		else if(y>arr[i])
		{
	        y = arr[i];
		}
		else
		{
			x = x;
			y = y;
		}
	}

	cout<<x<<" "<<y<<endl;
}

int main()
{
	int n,arr[100];
    cin>>n;

    input(arr,n);
    nos(arr,n);
    //output(arr,n);

    return 0;
}