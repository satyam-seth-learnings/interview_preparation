#include<bits/stdc++.h>
using namespace std;
int solve(int set[],int n,int sum)
{
	int t[n+1][sum+1];
	for(int i=0;i<n+1;i++)
	{
	    for(int j=0;j<sum+1;j++)
	    {
	    	if(j==0)
        		t[i][j]=1;
        	else if(i==0)
        		t[i][j]=0;
        	else if(set[i-1]<=j)
        		t[i][j]=t[i-1][j-set[i-1]]+t[i-1][j];
        	else
        		t[i][j]=t[i-1][j];
	    }
	}
	return t[n][sum];
}
int main()
{
	int arr[]={2,3,5,6,8,10};
	int n=sizeof(arr)/sizeof(arr[0]);
	int sum=10;
	cout<<solve(arr,n,sum);
	return 0;
}

