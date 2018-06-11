// Reorder an array according to given indexes

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

void reorder(int arr[],int ord[],int n)
{
	int t,k;
	int i = 0;
	while(n--)
	{
		if(i==0) t = arr[ord[i]];
		else t = k;
		if(i==0) arr[ord[i]] = arr[i];
		else arr[ord[i]] = t;
		cout<<arr[ord[i]]<<" "<<ord[i]<<" "<<i<<endl;
		output(arr,n);
		i = ord[ord[i]];
		k = arr[ord[i]];
	}
}

int main()
{
	int arr[100],ord[100];
	int n;
	cin>>n;

	input(arr,n);
	input(ord,n);
	reorder(arr,ord,n);
	output(arr,n);

	return 0;
}