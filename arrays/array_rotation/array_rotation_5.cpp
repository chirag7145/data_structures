// To find the no. of rotations

#include <bits/stdc++.h>
using namespace std;

void input(int arr[],int n)
{
	for(int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
}
int find_pivot(int arr[],int beg,int end)
{
	while(beg <= end)
	{
		int mid = (beg + end)/2;
		if(arr[mid] < arr[beg])
		{
			if(arr[beg] < arr[mid-1]) return mid;
			else end = mid - 1;
		}
		else
		{
			if(arr[beg] > arr[mid+1]) return mid+1;
			else beg = mid + 1;
		}
	}
}

int main()
{
	int arr[100];
	int n;

	cin>>n;

	input(arr,n);
	int ans = find_pivot(arr,0,n-1);
	if(ans == n) ans = 0;
	cout<<ans;
 	cout<<endl;

	return 0;
}