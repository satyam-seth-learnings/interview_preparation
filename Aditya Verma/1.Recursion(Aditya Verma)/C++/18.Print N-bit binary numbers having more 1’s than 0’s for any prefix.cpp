#include<bits/stdc++.h>
using namespace std;
void solve(int ones,int zeros,int n,string op)
{
	if(n==0)
	{
		cout<<op<<" ";
		return;
	}
	string op1=op;
	op1.push_back('1');
	solve(ones+1,zeros,n-1,op1);
	if(ones>zeros)
	{
		string op2=op;
		op2.push_back('0');
		solve(ones,zeros+1,n-1,op2);
	}
}
int main()
{
	int n;
	cout<<"Enter the value of n:";
	cin>>n;
	solve(0,0,n,"");
	return 0;
}
