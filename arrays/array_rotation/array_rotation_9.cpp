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

void rotate_array(int arr[],int n)
{
	int temp = arr[n-1];
	for(int i = 0; i<n-1;i++)
	{
		arr[n-i-1] = arr[n-i-2];
	}
	arr[0] = temp;
}

int hamming_max(int arr[],int n)
{
	int cnt = 0;


	for (int i = 0; i < n-1; i++)
	{
		int temp = arr[n-1];
		if(arr[i] = arr[i - 1])
	}

}