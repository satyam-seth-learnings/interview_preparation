#include<bits/stdc++.h>
using namespace std;
void solve(string ip,string op,vector <string>&v)
{
	if(ip.length()==0)
	{
		v.push_back(op);
		return;
	}
	if(isalpha(ip[0]))
	{
		string op1=op;
		string op2=op;
		op1.push_back(tolower(ip[0]));
		op2.push_back(toupper(ip[0]));
		ip.erase(ip.begin()+0);
		solve(ip,op1,v);
		solve(ip,op2,v);
	}
	else
	{
		string op1=op;
		op1.push_back(tolower(ip[0]));
		ip.erase(ip.begin()+0);
		solve(ip,op1,v);	
	}
	return;
}
vector <string> fun(string s)
{
	string ip=s;
	string op="";
	vector <string> v;
	solve(ip,op,v);
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
	string ip;
	cout<<"Enter a String:";
	cin>>ip;
	vector <string> v=fun(ip);
	print(v);
	return 0;
}
