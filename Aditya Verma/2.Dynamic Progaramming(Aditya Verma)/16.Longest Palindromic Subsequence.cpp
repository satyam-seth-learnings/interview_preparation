#include<bits/stdc++.h>
using namespace std;
int LPS(string s,int n)
{
	string s1=s;
	reverse(s.begin(),s.end());
	string s2=s;
	int t[n+1][n+1];
	for(int i=0;i<n+1;i++)
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
	return t[n][n];
}
int main()
{
	string s;
	cin>>s;
	cout<<LPS(s,s.length());
	return 0;
}
