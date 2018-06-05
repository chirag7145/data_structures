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

void rotate_array(int arr[],int n,int k)
{
	for(int i = 0; i < n; i++)
	{
	   cout<<arr[(i+k%n)%n]<<" ";
	}
}

int main()
{
	int n,k,arr[100];
	cin>>n>>k;

	input(arr,n);
	rotate_array(arr,n,k);
	//output(arr,n);

    cout<<endl;
	return 0;
}