#include<bits/stdc++.h>
using namespace std;
int t[1001][1001];
bool isPalindrome(string s,int i,int j)
{
	if(i==j)
		return true;
	if(i>j)
		return false;
	while(i<j)
	{
		if(s[i]!=s[j])
			return false;
		i++;
		j--;
	}
	return true;	
}
int palindromePartitianing(string s,int i,int j)
{
	if(i>=j)
		return 0;
	if(isPalindrome(s,i,j))
		return 0;
	if(t[i][j]!=-1)
		return t[i][j];
	int ans=INT_MAX;
	for(int k=i;k<j;k++)
	{
		int left,right,temp;
		if(t[i][k]!=-1)
			left=t[i][k];
		else
			left=palindromePartitianing(s,i,k);
		if(t[k+1][j]!=-1)
			right=t[k+1][j];
		else
			right=palindromePartitianing(s,k+1,j);
		temp=left+right+1;
		ans=min(ans,temp);
	}
	return t[i][j]=ans;
}
int main()
{
	memset(t,-1,sizeof(t));
	string s;
	cin>>s;
	cout<<palindromePartitianing(s,0,s.length()-1);
	return 0;
}
