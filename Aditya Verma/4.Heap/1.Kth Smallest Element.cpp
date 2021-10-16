#include<bits/stdc++.h>
using namespace std;
int solve(int arr[],int n,int k)
{
	priority_queue<int> max_heap;
	for(int i=0;i<n;i++)
	{
		max_heap.push(arr[i]);
		if(max_heap.size()>k)
			max_heap.pop();
	}
	return max_heap.top();
}
int main()
{
	int arr[]={11,3,2,1,15,5,4,45,88,96,50,45};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k=3;
	cout<<"3rd smallest element is : "<<solve(arr,n,k);
	return 0;
}
