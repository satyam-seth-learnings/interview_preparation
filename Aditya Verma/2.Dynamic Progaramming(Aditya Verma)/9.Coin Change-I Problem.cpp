//https://www.geeksforgeeks.org/coin-change-dp-7/
#include<bits/stdc++.h>
using namespace std;
int coinChange(int coin[],int n,int sum)
{
	int dp[n+1][sum+1];
	for(int i=0;i<n+1;i++)
	{
		for(int j=0;j<sum+1;j++)
		{
			if(j==0)
				dp[i][j]=1;
			else if(i==0)
				dp[i][j]=0;
			else if(coin[i-1]<=j)
				dp[i][j]=dp[i][j-coin[i-1]]+dp[i-1][j];
			else
				dp[i][j]=dp[i-1][j];
		}
	}
	return dp[n][sum];
}
int main()
{
	int coin[]={1,2,3};
	int n=sizeof(coin)/sizeof(coin[0]);
	int sum=5;
	cout<<coinChange(coin,n,sum);
	return 0;
}
