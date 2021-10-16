//https://practice.geeksforgeeks.org/problems/subset-sum-problem2014/
#include<bits/stdc++.h>
using namespace std;
bool isSubsetSum(int set[],int n,int sum)
{
	int static t[1001][1001];
	for(int i=0;i<n+1;i++)
	{
	    for(int j=0;j<sum+1;j++)
	    {
        	if(i==0)
        		t[i][j]=false;
        	else if(j==0)
        		t[i][j]=true;
        	else if(set[i-1]<=j)
        		t[i][j]=t[i-1][j-set[i-1]] || t[i-1][j];
        	else
        	    t[i][j]=t[i-1][j];
	    }
	}
	return t[n][sum];
}
bool equalSum(int arr[],int n)
{
	int sum=accumulate(arr,arr+n,0);
	if(sum%2!=0)
		return false;
	return isSubsetSum(arr,n,sum/2);
}
int main()
{
	int arr[]={1,5,11,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	if(equalSum(arr,n)==true)
		cout<<"Yes";
	else
		cout<<"No";
	return 0;
}

