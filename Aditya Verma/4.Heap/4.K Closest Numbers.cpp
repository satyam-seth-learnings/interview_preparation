#include<bits/stdc++.h>
using namespace std;
void kClosest(int arr[],int n,int k,int x)
{
	priority_queue<pair<int,int>> max_heap;
	for(int i=0;i<n;i++)
	{
		max_heap.push({abs(arr[i]-x),arr[i]});
		if(max_heap.size()>k)
		{
			max_heap.pop();
		}
	}
	while(max_heap.size())
	{
		cout<<max_heap.top().second<<" ";
		max_heap.pop();	
	}
}
int main()
{
	int arr[]={6,5,3,2,8,10,9};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k=3,x=5;
	kClosest(arr,n,k,x);
	return 0;
}
