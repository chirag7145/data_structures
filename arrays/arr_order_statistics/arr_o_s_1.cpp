// Largest no. in array

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
	int x = arr[0];
	for (int i = 1; i < n; i++)
	{
		if(x<arr[i]) x = arr[i];
	}
	cout<<x<<endl;
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