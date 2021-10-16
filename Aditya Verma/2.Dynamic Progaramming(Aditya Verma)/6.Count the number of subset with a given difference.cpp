#include<bits/stdc++.h>
using namespace std;
int t[1001][1001];
int countSubsetSum(int arr[],int n,int sum)
{
	for(int i=0;i<n+1;i++)
	{
		for(int j=0;j<sum+1;j++)
		{
			if(j==0)
				t[i][j]=1;
			else if(i==0)
				t[i][j]=0;
			else if(arr[i-1]<=j)
				t[i][j]=t[i-1][j-arr[i-1]]+t[i-1][j];
			else
				t[i][j]=t[i-1][j];
		}
	}
	return t[n][sum];
}
int solve(int arr[],int n,int diff)
{
	int sum=(diff+accumulate(arr,arr+n,0))/2;
	return countSubsetSum(arr,n,sum);
}
int main()
{
	int arr[]={1,1,2,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	int diff=1;
	cout<<solve(arr,n,diff);
	return 0;
}
