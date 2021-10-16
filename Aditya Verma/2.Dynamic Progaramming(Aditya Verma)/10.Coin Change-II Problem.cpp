#include<bits/stdc++.h>
using namespace std;
int solve(int coin[],int n,int sum)
{
	int dp[n+1][sum+1];
	for(int i=0;i<sum+1;i++)
		for(int j=0;j<sum+1;j++)
			dp[i][j]=0;
	for(int j=0;j<sum+1;j++)
		dp[0][j]=INT_MAX-1;
	for(int i=1;i<n+1;i++)
		dp[i][0]=0;
	for(int j=1;j<sum+1;j++)
	{
		if(j%coin[0]==0)
			dp[1][j]=j/coin[0];
		else
			dp[1][j]=INT_MAX-1;
	}
	for(int i=2;i<n+1;i++)
	{
		for(int j=1;j<sum+1;j++)
		{
			if(coin[i-1]<=j)
				dp[i][j]=min(1+dp[i][j-coin[i-1]],dp[i-1][j]);
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
	cout<<solve(coin,n,sum);
	return 0;
}


// Leetcode
//class Solution {
//public:
//    int change(int amount, vector<int>& coins) {
//        int n=coins.size();
//        int dp[n+1][amount+1];
//	    for(int i=0;i<n+1;i++)
//        {
//            for(int j=0;j<amount+1;j++)
//            {
//                if(j==0)
//                    dp[i][j]=1;
//                else if(i==0)
//                    dp[i][j]=0;
//                else if(coins[i-1]<=j)
//                    dp[i][j]=dp[i][j-coins[i-1]]+dp[i-1][j];
//                else
//                    dp[i][j]=dp[i-1][j];
//            }
//        }
//        return dp[n][amount];
//    }
//};
