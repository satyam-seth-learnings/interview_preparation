#include<bits/stdc++.h>
using namespace std;
bool solve(string s1,string s2)
{
	if(s1==s2)
		return true;
	if(s2.length()<=1)
		return false;
	int n=s1.length();
	bool flag=false;
	for(int i=1;i<=n-1;i++)
	{
		if((solve(s1.substr(0,i),s2.substr(n-i,i))==true && solve(s1.substr(i,n-i),s2.substr(0,n-i))==true) || (solve(s1.substr(0,i),s2.substr(0,i))==true && solve(s1.substr(i,n-i),s2.substr(i,n-i))==true))
		{
			flag=true;
			break;
		}
	}
	return flag;
}
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	int n1=s1.length(),n2=s2.length();
	if(n1!=n2)
		cout<<false;
	else if(n1==0 && n2==0)
		cout<<true;
	else
		cout<<solve(s1,s2);
	return 0;
}
