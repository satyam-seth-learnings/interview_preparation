//https://www.geeksforgeeks.org/unbounded-knapsack-repetition-items-allowed/

#include<iostream>
using namespace std;
int max(int a,int b)
{
	return (a>b)?a:b;
}
int knapSack(int wt[],int val[],int W,int n)
{
	if(n==0||W==0)
		return 0;
	if(wt[n-1]<=W)
		return max(val[n-1]+knapSack(wt,val,W-wt[n-1],n),knapSack(wt,val,W,n-1));
	else if(wt[n-1]>W)
		return knapSack(wt,val,W,n-1);
}
int main()
{
	int wt[]={1,3,4,5};
	int val[]={10,40,50,70};
	int n=sizeof(wt)/sizeof(wt[0]);
	int W=8;
	cout<<knapSack(wt,val,W,n);
}
