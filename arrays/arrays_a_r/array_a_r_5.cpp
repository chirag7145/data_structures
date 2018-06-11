// Replace the current idx with the multiplication of its prevoius element and next element

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

void modify(int arr[],int n)
{
	int a,b;
	for(int i = 0; i < n; i++)
	{
		if(i==0 || i==n-2) a = arr[i]*arr[i+1];
		else a = arr[i]*arr[i+2];
        
        if(i==0) arr[i] = a;
        else arr[i] = b;
        
        if(i==0) b = arr[i]*arr[i+2];
        else b = a;

		if(i==0) arr[i] = a;
	}
}

int main()
{
	int arr[100];
	int n;
	cin>>n;

	input(arr,n);
	modify(arr,n);
	output(arr,n);

	return 0;
}