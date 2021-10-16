#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={11,3,2,1,15,5,4,45,88,96,50,45};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k=3;
	priority_queue<int,vector<int>,greater<int>> min_heap;
	for(int i=0;i<n;i++)
	{
		min_heap.push(arr[i]);
		if(min_heap.size()>k)
			min_heap.pop();
	}
	cout<<k<<" largest elements: ";
	while(min_heap.size()>0)
	{
		cout<<min_heap.top()<<" ";
		min_heap.pop();
	}
	return 0;
}
