#include<bits/stdc++.h>
using namespace std;
string LCS(string x,string y,int n,int m)
{
	int t[n+1][m+1];
	for(int i=0;i<n+1;i++)
		for(int j=0;j<m+1;j++)
			if(i==0 || j==0)
				t[i][j]=0;
			else if(x[i-1]==y[j-1])
				t[i][j]=1+t[i-1][j-1];
			else
				t[i][j]=max(t[i-1][j],t[i][j-1]);
	int i=n,j=m;
	string s;
	while(i>0 && j>0)
	{
		if(x[i-1]==y[j-1])
		{
			s.push_back(x[i-1]);
			i--;
			j--;
		}
		else
		{
			if(t[i][j-1]>t[i-1][j])
				j--;
			else
				i--;
		}
	}
	reverse(s.begin(),s.end());
	return s;
}
int main()
{
	string x,y;
	cin>>x>>y;
	cout<<LCS(x,y,x.length(),y.length());
	return 0;
}
