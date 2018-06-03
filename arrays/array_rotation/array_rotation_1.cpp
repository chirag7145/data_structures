// Rotate the array k times

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
	//cout<<endl;
}

void reverse_array(int arr[],int st,int end)
{
	for(int i = 0; i <= (end-st)/2; i++)
	{
		if((end-st)%2==0)
		{
			if(i == (end-st)/2) break;
		}
		arr[i+st] = arr[i+st]^arr[end-i];
		arr[end-i] = arr[i+st]^arr[end-i];
		arr[i+st] = arr[end-i]^arr[i+st];
		//swap(arr[i+st],arr[end-i]);
	}
}

void rotate_array(int arr[],int n,int k)
{
	reverse_array(arr,0,n-1-k);
	output(arr,n);
	reverse_array(arr,n-k,n-1);
	output(arr,n);
}

int main()
{
	int arr[100];
	int n,k;

	cin>>n>>k;

	input(arr,n);
	reverse_array(arr,0,n-1);
	output(arr,n);
	rotate_array(arr,n,k);
	
    cout<<endl;

    return 0;
}