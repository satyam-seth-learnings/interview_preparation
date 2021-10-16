#include<bits/stdc++.h>
using namespace std;
int minimiseCost(int arr[],int n)
{
	int cost=0;
	priority_queue<int,vector<int>,greater<int>> min_heap;
	for(int i=0;i<n;i++)
		min_heap.push(arr[i]);
	while(min_heap.size()>=2)
	{
		int first=min_heap.top();
		min_heap.pop();
		int second=min_heap.top();
		min_heap.pop();
		cost=cost+first+second;
		min_heap.push(first+second);
	}
	return cost;
}
int main()
{
	int arr[]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"Minimum Cost:"<<minimiseCost(arr,n);
	return 0;
}
