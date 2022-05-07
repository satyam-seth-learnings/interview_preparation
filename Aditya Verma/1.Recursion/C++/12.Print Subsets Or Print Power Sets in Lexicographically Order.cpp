#include<bits/stdc++.h>
using namespace std;
void solve(string ip,string op,vector <string>&v)
{
	if(ip.length()==0)
	{
		v.push_back(op);
		return;
	}
	string op1=op;
	string op2=op;
	op2.push_back(ip[0]);
	ip.erase(ip.begin()+0);
	solve(ip,op1,v);
	solve(ip,op2,v);
	return;
}
void print(vector <string>&v)
{
	static int i=0;
	if(i==v.size())
		return;
	cout<<v.at(i)<<endl;
	i++;
	print(v);
	return;
}
int main()
{
	string s;
	vector <string>v;
	cout<<"Enter String:";
	cin>>s;
	solve(s,"",v);
	sort(v.begin(),v.end());
	print(v);
	return 0;
}
