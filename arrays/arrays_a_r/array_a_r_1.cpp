// Rearrange the given array such that arr[i] = i

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

void rearrange(int arr[],int n)
{
/*	for(int i = 0; i <= n; i++)
	{
		for(int j = 0; j <= n; j++)
		{
			if(i == arr[j]) brr[i] = i;
		}
	}*/

/*	for (int i = 0; i < n; i++)
	{
		int j = n/3;
        while(j--)
        {
			if(arr[i]!=-1)
			{
				swap(arr[i],arr[arr[i]]);
			}
			if(arr[i]!=-1)
			{
				swap(arr[i],arr[arr[i]]);
			}
        }
	}*/
	for(int i = 0; i < n ; i++)
	{
		if(arr[i]!=-1&&arr[i]!=i)
		{
			swap(arr[i],arr[arr[i]]);
		}
	}
}

int main()
{
	int arr[100];
	int n;
	cin>>n;
    
	input(arr,n);

	rearrange(arr,n);

	output(arr,n);
	return 0;

}