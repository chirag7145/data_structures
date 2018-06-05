// Reverse an array

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

void reverse(int arr[],int end)
{
	for (int i = 0; i <= end/2; i++)
	{
		if(end%2==0)
		{
			if(i==end/2) break;
		}
		arr[i] = arr[end-i]^arr[i];
		arr[end-i] = arr[end-i]^arr[i];
		arr[i] = arr[end-i]^arr[i];
	}
}

int main()
{
	int arr[100];
	int n;
	cin>>n;

	input(arr,n);
	reverse(arr,n-1);
	output(arr,n);
    
    cout<<endl;
	return 0;
}