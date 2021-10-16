#include<bits/stdc++.h>
using namespace std;
void topK(int arr[],int n,int k)
{
	unordered_map<int,int> mp;
	for(int i=0;i<n;i++)
		mp[arr[i]]++;
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>min_heap;
	for(auto i=mp.begin();i!=mp.end();i++)
	{
		min_heap.push({i->second,i->first});
		if(min_heap.size()>k)
			min_heap.pop();
	}
	while(min_heap.size())
	{
		cout<<min_heap.top().second<<" ";
		min_heap.pop();
	}
}
int main()
{
	int arr[]={1,1,1,3,2,2,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k=2;
	topK(arr,n,k);
	return 0;
}
