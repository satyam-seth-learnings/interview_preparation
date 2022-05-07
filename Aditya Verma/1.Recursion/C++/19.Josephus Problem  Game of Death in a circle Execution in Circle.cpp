#include<bits/stdc++.h>
using namespace std;
void solve(vector <int>&v,int k,int index)
{
	if(v.size()==1)
	{
		cout<<v.at(0);
		return;
	}
	index=(index+k)%v.size();
	v.erase(v.begin()+index);
	solve(v,k,index);
}
int main()
{
	int n,k;
	cout<<"Enter team size and value of Kth person:";
	cin>>n>>k;
	vector <int>v;
	for(int i=1;i<=n;i++)
		v.push_back(i);
	k--;
	solve(v,k,0);
	return 0;
}
