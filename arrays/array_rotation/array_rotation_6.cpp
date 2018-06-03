// Find the output array k no. of rotations of the given array

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

void reverse_array(int arr[],int st,int end)
{
	for(int i = 0; i <= (end-st)/2; i++)
	{
		if((end-st)%2==0)
		{
			if(i == (end-st)/2) break;
		}
		arr[i + st] = arr[i + st]^arr[end - i];
		arr[end - i] = arr[i + st]^arr[end - i];
		arr[i + st] = arr[i + st]^arr[end - i];
	}
}

void rotate(int arr[],int n,int k)
{
	if(k != 0)
	{
		reverse_array(arr,0,n-1);
		reverse_array(arr,0,n-k-1);
		reverse_array(arr,n-k,n-1);		
	}
}
int main()
{
	int arr[100];
	int n,k;

	cin>>n;

	input(arr,n);

	cin>>k;

    rotate(arr,n,k%n);
    output(arr,n);
    
    return 0;
}