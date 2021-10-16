#include<bits/stdc++.h>
using namespace std;
vector<int> nsl(int arr[],int n)
{
	vector<int> v;
	stack<pair<int,int>> s;
	for(int i=0;i<n;i++)
	{
		if(s.size()==0)
			v.push_back(-1);
		else if(s.size()>0 && s.top().first<arr[i])
			v.push_back(s.top().second);
		else if(s.size()>0 && s.top().first>=arr[i])
		{
			while(s.size()>0 && s.top().first>=arr[i])
				s.pop();
			if(s.size()==0)
				v.push_back(-1);
			else
				v.push_back(s.top().second);
		}
		s.push({arr[i],i});
	}
	return v;
}
vector<int> nsr(int arr[],int n)
{
	vector<int> v;
	stack<pair<int,int>> s;
	for(int i=n;i>=0;i--)
	{
		if(s.size()==0)
			v.push_back(n);
		else if(s.size()>0 && s.top().first<arr[i])
			v.push_back(s.top().second);
		else if(s.size()>0 && s.top().first>=arr[i])
		{
			while(s.size()>0 && s.top().first>=arr[i])
				s.pop();
			if(s.size()==0)
				v.push_back(n);
			else
				v.push_back(s.top().second);
		}
		s.push({arr[i],i});
	}
	reverse(v.begin(),v.end());
	return v;
}
int mah(int arr[],int n)
{
	vector<int> left=nsl(arr,n);
	vector<int> right=nsr(arr,n);

	vector<int> width,area;
	for(int i=0;i<left.size();i++)
		width.push_back(right[i]-left[i]-1);
	for(int i=0;i<width.size();i++)
		area.push_back(arr[i]*width[i]);
	return *max_element(area.begin(),area.end());
}
int main()
{
	int arr[]={6,2,5,4,5,1,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<mah(arr,n);
	return 0;
}
