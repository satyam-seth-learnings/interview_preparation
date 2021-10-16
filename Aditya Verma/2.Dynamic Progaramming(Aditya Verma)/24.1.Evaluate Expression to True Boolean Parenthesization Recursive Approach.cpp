#include<bits/stdc++.h>
using namespace std;
int solve(string s,int i,int j,bool isTrue)
{
	if(i>j)
		return false;
	if(i==j)
	{
		if(isTrue==true)
			return s[i]=='T';
		else
			return s[i]=='F';
	}
	int ans=0;
	for(int k=i+1;k<=j-1;k+=2)
	{
		int lT=solve(s,i,k-1,true);
		int lF=solve(s,i,k-1,false);
		int rT=solve(s,k+1,j,true);
		int rF=solve(s,k+1,j,false);
		if(s[k]=='&')
		{
			if(isTrue==true)
				ans=ans+lT*rT;
			else
				ans=ans+lF*rT+lT*rF+lF*rF;
		}
		else if(s[k]=='|')
		{
			if(isTrue==true)
				ans=ans+lF*rT+lT*rF+lF*rF;
			else
				ans=ans+lT*rT;
		}
		else if(s[k]=='^')
		{
			if(isTrue==true)
				ans=ans+lT*rF+lF*rT;
			else
				ans=ans+lT*rT+lF*rF;
		}
	}
	return ans;
}
int main()
{
	string s="T^F&T";
	cout<<solve(s,0,s.size()-1,true);
	return 0;
}
