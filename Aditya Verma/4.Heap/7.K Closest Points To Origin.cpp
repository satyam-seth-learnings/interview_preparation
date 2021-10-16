#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[][2]={{1,3},{-2,2},{5,8},{0,1}};
	int k=2;
	priority_queue<pair<int,pair<int,int>>>max_heap;
	for(int i=0;i<4;i++)
	{
		max_heap.push({arr[i][0]*arr[i][0]+arr[i][1]*arr[i][1],{arr[i][0],arr[i][1]}});
		if(max_heap.size()>k)
			max_heap.pop();
	}
	while(max_heap.size())
	{
		pair<int,int> p=max_heap.top().second;
		cout<<p.first<<" "<<p.second<<endl;
		max_heap.pop();
	}
	return 0;
}
