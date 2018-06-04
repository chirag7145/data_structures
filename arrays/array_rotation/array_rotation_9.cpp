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

int hamming_max(int arr[],int brr[],int n)
{
	
	for (int i = 0; i < n-1; i++)
	{
		int cnt = 0;
		for(int j = 0; j < n-1; j++)
		{
			if(arr[j] - brr[j] == 0) cnt++;
		}

		if(cnt == 0) return n;
		else rotate_array(brr,n);
/*		int temp = arr[n-1];
		if(arr[i] - arr[i-1-j] == 0) cnt++;
		if(i==n-2-j)
		{
			if(cnt == 0) return n;
			else j = 1;
		}*/
	}

}

int main()
{
	int arr[100],brr[100];
	int n;

	cin>>n;

	input(arr,n);

	for(int i = 0; i < n; i++)
	{
		brr[i] = arr[i];
	}

	cout<<hamming_max(arr,brr,n)<<endl;

	return 0;
}