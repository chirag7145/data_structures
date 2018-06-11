// Smallest missing no. in array

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

int binary_search(int arr[],int beg,int end,int m)
{
	int mid;
	while(beg<=end)
	{
		mid = (beg+end)/2;
		if(arr[mid] == mid) beg = mid + 1;
		else end = mid - 1;
	}
	return mid+1;
}

int main()
{
	int n,m,arr[100];
    cin>>n>>m;

    input(arr,n);
    cout<<binary_search(arr,0,n-1,m)<<endl;
    //output(arr,n);

    return 0;
}