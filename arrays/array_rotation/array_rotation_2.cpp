// Find the index of given element in sorted and rotated array

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

/*int find(int arr[],int beg,int end,int k)
{
	int i = 0;
	while(beg<=end)
	{
		if(k < arr[beg])
		{
			beg = end;
			beg--;
		}
		else if(k > arr[beg])
		{
			beg++;
		}
		else
		{
			return beg;
		}
	}
	return -1;
}*/

int find_pivot(int arr[],int beg,int end)
{
	while(beg <= end)
	{
		int mid = (beg + end)/2;
		if(arr[mid] < arr[beg]) 
		{
			if(arr[beg] < arr[mid - 1])
			{
				return mid;
			}
			else
			{
				end = mid - 1;
			}
		}
		else
		{
			if(arr[beg] > arr[mid + 1])
			{
				return mid + 1;
			}
			else
			{
				beg = mid + 1;
			}
		}
	}
}

int find_index(int arr[],int beg,int end,int k,int pivot_idx)
{
	int b_pivot_idx;
	if(pivot_idx)
		b_pivot_idx = pivot_idx - 1;
    else
    	b_pivot_idx = pivot_idx;
	if(k >= arr[beg])
	{
		while(beg <= b_pivot_idx)
		{
			int mid = (beg + b_pivot_idx)/2;
			if(arr[mid] == k) return mid;
			else if(arr[mid] > k)
			{
				b_pivot_idx = mid - 1;
			}
			else
			{
				beg = mid + 1;
			}
		}
	}
	else
	{
		while(pivot_idx <= end)
		{
			int mid = (pivot_idx + end)/2;

			if(arr[mid] == k) return mid;
			else if(arr[mid] > k)
			{
				end = mid - 1;
			}
			else
			{
				pivot_idx = mid + 1;
			}
		}
	}
	return -1;
}

int main()
{
	int arr[100];
	int n,k;

	cin>>n;

	input(arr,n);

    int pivot_idx = find_pivot(arr,0,n-1);
    if(pivot_idx == n) pivot_idx = 0; 
    cout<<pivot_idx;
   // cin>>k;
	
   // cout<<find_index(arr,0,n-1,k,pivot_idx);
	
    cout<<endl;

    return 0;
}