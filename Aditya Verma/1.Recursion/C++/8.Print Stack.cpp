#include<iostream>
#include<stack>
#include<vector>
using namespace std;
void print(stack <int>s)
{
	if(s.empty())
		return;
	cout<<s.top()<<" ";
	s.pop();
	print(s);
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
	print(s);
	return 0;
}
