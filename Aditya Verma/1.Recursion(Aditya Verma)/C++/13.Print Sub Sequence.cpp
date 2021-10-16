#include<bits/stdc++.h>
using namespace std;
void solve(string ip,string op,set <string>&v)
{
	if(ip.length()==0)
	{
		v.insert(op);
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
int main()
{
	string s;
	set <string>v;
	cout<<"Enter String:";
	cin>>s;
	solve(s,"",v);
	for (auto it=v.begin(); it != v.end(); ++it) 
        cout << ' ' << *it;
	return 0;
}
