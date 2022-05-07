#include<iostream>
#include<stack>
#include<vector>
using namespace std;
void insert(stack <int>&s,int temp)
{
	if(s.top()<=temp || s.size()==1)
	{
		s.push(temp);
		return;
	}
	int val=s.top();
	s.pop();
	insert(s,temp);
	s.push(val);
	return;
}
void sort(stack <int>&s)
{
	if(s.size()==1)
		return;
	int temp=s.top();
	s.pop();
	sort(s);
	insert(s,temp);
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
	sort(s);
	
	cout<<"After Sort:"<<endl;
//	cout<<s.size();
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
}

