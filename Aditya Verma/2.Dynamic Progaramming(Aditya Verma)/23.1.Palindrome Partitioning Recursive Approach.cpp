#include<iostream>
using namespace std;
bool isPalindrome(string s,int i,int j)
{
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
	int ans=INT_MAX;
	for(int k=i;k<j;k++)
	{
		int temp=palindromePartitianing(s,i,k)+palindromePartitianing(s,k+1,j)+1;
		ans=min(ans,temp);
	}
	return ans;
}
int main()
{
	string s;
	cin>>s;
	cout<<palindromePartitianing(s,0,s.length()-1);
	return 0;
}
