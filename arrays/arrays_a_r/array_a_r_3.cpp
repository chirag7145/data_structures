// Move all the zeroes at the end

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
	int count = 0;
	for(int i = 0; i < n; i++)
	{
		if(arr[i]!=0)
		{
			cout<<arr[i]<<" ";
			count++;
		}
	}
	for(int i = 0; i < n-count; i++)
	{
		cout<<"0 ";
	}
}

int main()
{
	int arr[100];
	int n;
	cin>>n;
    
	input(arr,n);
	output(arr,n);
	cout<<endl;
	
	return 0;
}