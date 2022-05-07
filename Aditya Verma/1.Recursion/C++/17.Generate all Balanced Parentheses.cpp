#include<bits/stdc++.h>
using namespace std;
void solve(int open,int close,string op,vector <string>&v)
{
	if(open==0 && close==0)
	{
		v.push_back(op);
		return;
	}
	if(open!=0)
	{
		string op1=op;
		op1.push_back('(');
		solve(open-1,close,op1,v);
	}
	if(open<close)
	{
		string op2=op;
		op2.push_back(')');
		solve(open,close-1,op2,v);
	}
	return;
}
vector <string> fun(int n)
{
	int open=n;
	int close=n;
	string op="";
	vector <string> v;
	solve(open,close,op,v);
	return v;
}
void print(vector <string>&v)
{
	if(v.size()==0)
		return;
	cout<<v.at(0)<<endl;
	v.erase(v.begin()+0);
	print(v);
}
int main()
{
	int n;
	cout<<"Enter value of n:";
	cin>>n;
	vector <string> v=fun(n);
	print(v);
	return 0;
}
