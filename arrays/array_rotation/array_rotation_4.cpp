// Find the max summation of arr[i]*i

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

int total_sum(int arr[],int n)
{
	
    int sum_arr = 0,r0 = 0;
    for(int i = 0; i < n; i++)
    {
    	sum_arr += arr[i]; 
    	r0 += i*arr[i];
    }

    int r = r0;

    for(int i = 0; i < n; i++)
	{
		//int x = 0;
/*		for(int j = 0; j <= i; j++)
		{
			x += arr[n-1-j];
		}*/
		r0 += sum_arr -n*arr[n-1-i]; 
		if(r < r0)  r = r0; 
	}

	return r;
}

int main()
{
	int arr[100];
	int n;

	cin>>n;

	input(arr,n);
	
    cout<<total_sum(arr,n);
	/*for(int i = 0; i < n; i++)
	{
		rotate_array(arr,n);
		output(arr,n);
	}
*/
    cout<<endl;
    return 0;
}