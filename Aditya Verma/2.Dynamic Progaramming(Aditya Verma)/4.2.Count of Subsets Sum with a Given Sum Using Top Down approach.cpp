#include<bits/stdc++.h>
using namespace std;
int t[1001][1001];
int solve(int arr[],int n,int sum)
{
	if(sum==0)
		return 1;
	if(n==0)
		return 0;
	if(t[n][sum]!=0)
		return t[n][sum];
	if(arr[n-1]<=sum)
		return t[n][sum]=solve(arr,n-1,sum-arr[n-1])+solve(arr,n-1,sum);
	return t[n][sum]=solve(arr,n-1,sum);
}
int main()
{
	int arr[]={2,3,5,6,8,10};
	int n=sizeof(arr)/sizeof(arr[0]);
	int sum=10;
	cout<<solve(arr,n,sum);
	return 0;
}

