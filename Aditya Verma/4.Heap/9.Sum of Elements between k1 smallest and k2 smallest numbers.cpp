#include<bits/stdc++.h>
using namespace std;
int kthSmallest(int arr[],int n,int k)
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
	int arr[]={1,3,5,11,12,15};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k1=3,k2=6,sum=0;
	int first=kthSmallest(arr,n,k1);
	int second=kthSmallest(arr,n,k2);
	for(int i=0;i<n;i++)
		if(arr[i]>first && arr[i]<second)
			sum+=arr[i];
	cout<<"Sum:"<<sum;
	return 0;
}
