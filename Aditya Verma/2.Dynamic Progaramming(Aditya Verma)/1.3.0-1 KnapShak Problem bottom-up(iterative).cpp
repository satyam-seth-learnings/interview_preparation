//https://www.geeksforgeeks.org/0-1-knapsack-problem-dp-10/
#include <bits/stdc++.h>
using namespace std;
int max(int a,int b)
{
	return (a>b)?a:b;
}
int knapSack(int wt[],int val[],int W,int n)
{
	int arr[n+1][W+1];
	for(int i=0;i<n+1;i++)
		for(int j=0;j<W+1;j++)
		{
			if(i==0||j==0)
				arr[i][j]=0;
			else if(wt[i-1]<=j)
				arr[i][j]=max(val[i-1]+arr[i-1][j-wt[i-1]],arr[i-1][j]);
			else
				arr[i][j]=arr[i-1][j];
		}
	return arr[n][W];
}
int main()
{
	int wt[]={10,20,30};
	int val[]={60,100,120};
	int n=sizeof(wt)/sizeof(wt[0]);
	int W=50;
	cout<<knapSack(wt,val,W,n);
}
