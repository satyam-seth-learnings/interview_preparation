//https://www.geeksforgeeks.org/subset-sum-problem-dp-25/
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
int main()
{
	int set[]={3,34,4,12,5,2};
	int sum=9;
	int n=sizeof(set)/sizeof(set[0]);
	if(isSubsetSum(set,n,sum)==true)
		cout<<"Found a subset with given sum";
	else
		cout<<"No subset with given sum";
	return 0;
}
