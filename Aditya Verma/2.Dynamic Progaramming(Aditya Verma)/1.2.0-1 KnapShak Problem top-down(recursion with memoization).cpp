//https://www.geeksforgeeks.org/0-1-knapsack-problem-dp-10/

#include <bits/stdc++.h>
using namespace std;
int arr[4][4];
int max(int a,int b)
{
	return (a>b)?a:b;
}
int knapSack(int wt[],int val[],int W,int n)
{
	if(n==0||W==0)
		return 0;
	if(arr[n][W]!=0)
		return arr[n][W];
	if(wt[n-1]<=W)
		return arr[n][W]=max(val[n-1]+knapSack(wt,val,W-wt[n-1],n-1),knapSack(wt,val,W,n-1));
	else if(wt[n-1]>W)
		return arr[n][W]=knapSack(wt,val,W,n-1);
}
int main()
{
	int wt[]={10,20,30};
	int val[]={60,100,120};
	int n=sizeof(wt)/sizeof(wt[0]);
	int W=50;
	cout<<knapSack(wt,val,W,n);
}
