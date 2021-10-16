#include<bits/stdc++.h>
using namespace std;

//Logic-1
//void freqSort(int arr[],int n,int k)
//{
//	unordered_map<int,int> mp;
//	for(int i=0;i<n;i++)
//		mp[arr[i]]++;
//	priority_queue<pair<int,int>>min_heap;
//	for(int i=0;i<n;i++)
//		min_heap.push({mp[arr[i]],arr[i]});
//	while(min_heap.size())
//	{
//		cout<<min_heap.top().second<<" ";
//		min_heap.pop();
//	}
//}


//Logic-2
void freqSort(int arr[],int n,int k)
{
	unordered_map<int,int> mp;
	for(int i=0;i<n;i++)
		mp[arr[i]]++;
	priority_queue<pair<int,int>>min_heap;
	for(auto i=mp.begin();i!=mp.end();i++)
	{
		min_heap.push({i->second,i->first});
	}
	while(min_heap.size())
	{
		int freq=min_heap.top().first;
		int ele=min_heap.top().second;
		for(int i=0;i<freq;i++)
			cout<<ele<<" ";
		min_heap.pop();
	}
}
int main()
{
	int arr[]={1,1,1,3,2,2,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k=2;
	freqSort(arr,n,k);
	return 0;
}
