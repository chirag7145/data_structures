// To check if the pair of sum exists that equals to given k

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

void rotate_array(int arr[],int st,int end)
{
	if((end-st)%2==0)
	{
		if(i == (end-st)/2) break;
	}
	arr[i+st] = arr[i+st]^arr[end-i];
	arr[end-i] = arr[i+st]^arr[end-i];
	arr[i+st] = arr[end-i]^arr[i+st];
}

// bool find_pair(int arr[],int beg,int end,int k,int pivot_idx)
// {

//     rotate_array(arr,0,pivot_idx-1);
//     rotate_array(arr,pivot_idx,end);
//     rotate_array(arr,0,end);
    
//     while(beg < end)
//     {
// 	    if(arr[beg] + arr[end] == k) return true;
	    	
// 	    else if(arr[beg] + arr[end] < k) beg++;
// 	    else end--;	
//     }

// 	return false;
// }

bool find_pair(int arr[],int end,int k,int min)
{
	int max = min - 1;
	while(max != min)
	{
		if((arr[min] + arr[max] == k)) return true;
		else if((arr[min] + arr[max] < k)) 
		{
			if(min == end) min = 0;
			else min++;
		}
		else
		{
			if(max == 0) max = end;
			else max--;
		}
	}
	return false;
}

int main()
{
	int arr[100];
	int n,k;

	cin>>n;

	input(arr,n);

    int pivot_idx = find_pivot(arr,0,n-1);
    if(pivot_idx == n) pivot_idx = 0; 
    
	cin>>k;
	
    if(find_pair(arr,n-1,k,pivot_idx)) cout<<"true";
    else cout<<"false";
	
    cout<<endl;

    return 0;
}