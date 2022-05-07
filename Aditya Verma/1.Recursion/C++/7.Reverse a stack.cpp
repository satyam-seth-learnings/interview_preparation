#include<iostream>
#include<stack>
#include<vector>
using namespace std;
void insert(stack <int>&s,int ele)
{
	if(s.empty())
	{
		s.push(ele);
		return;
	}
	int temp=s.top();
	s.pop();
	insert(s,ele);
	s.push(temp);
	return;
}
void reverse(stack <int>&s)
{
	if(s.size()==1 || s.empty())
		return;
	int temp=s.top();
	s.pop();
	reverse(s);
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
	reverse(s);
	
	cout<<"After Reverse:"<<endl;
//	cout<<s.size();
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
}
