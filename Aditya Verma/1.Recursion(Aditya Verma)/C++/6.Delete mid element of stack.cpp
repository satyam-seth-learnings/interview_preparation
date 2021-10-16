#include<iostream>
#include<stack>
#include<vector>
using namespace std;
void solve(stack <int>&s,int mid)
{
	if(mid==1)
	{
		s.pop();
		return;
	}
	int temp=s.top();
	s.pop();
	solve(s,mid-1);
	s.push(temp);
	return;
}
void mid_del(stack <int>&s,int size)
{
	if(s.size()==0)
		return;
	solve(s,(size/2)+1);
	return;
}
int main()
{
	int n;
	cout<<"Enter the Value of n:";
	cin>>n;
	stack <int>s;
	for(int i;i<n;i++)
	{
		int x;
		cout<<"Enter the Element "<<i+1<<": ";
		cin>>x;
		s.push(x);	
	}
	mid_del(s,s.size());
	
	cout<<"After Deletion of Middle Element:"<<endl;
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
}
