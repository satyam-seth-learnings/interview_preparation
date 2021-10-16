#include<bits/stdc++.h>
using namespace std;
string SCS(string s1,string s2,int m,int n)
{
	int t[m+1][n+1];
	for(int i=0;i<m+1;i++)
	{
		for(int j=0;j<n+1;j++)
		{
			if(i==0 || j==0)
				t[i][j]=0;
			else if(s1[i-1]==s2[j-1])
				t[i][j]=1+t[i-1][j-1];
			else
				t[i][j]=max(t[i-1][j],t[i][j-1]);
		}
	}
	int i=m,j=n;
	string s="";
	while(i>0 && j>0)
	{
		if(s1[i-1]==s2[j-1])
		{
			s.push_back(s1[i-1]);
			i--;
			j--;
		}
		else if(t[i-1][j]>t[i][j-1])
		{
			s.push_back(s1[i-1]);
			i--;
		}
		else if(t[i][j-1]>t[i-1][j])
		{
			s.push_back(s2[j-1]);
			j--;
		}
	}
	while(i>0)
	{
		s.push_back(s1[i-1]);
		i--;
	}
	while(j>0)
	{
		s.push_back(s2[j-1]);
		j--;
	}
	reverse(s.begin(),s.end());
	return s;
}
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	cout<<SCS(s1,s2,s1.length(),s2.length());
	return 0;
}
