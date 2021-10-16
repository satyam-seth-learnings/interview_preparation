#include <bits/stdc++.h>
using namespace std;
int max(int a,int b)
{
	return (a>b)?a:b;
}
int rodCutting(int length[],int profit[],int N,int n)
{
	int arr[n+1][N+1];
	for(int i=0;i<n+1;i++)
		for(int j=0;j<N+1;j++)
		{
			if(i==0||j==0)
				arr[i][j]=0;
			else if(length[i-1]<=j)
				arr[i][j]=max(profit[i-1]+arr[i][j-length[i-1]],arr[i-1][j]);
			else
				arr[i][j]=arr[i-1][j];
		}
	return arr[n][N];
}
int main()
{
	int length[]={1,3,4,5};
	int profit[]={10,40,50,70};
	int n=sizeof(length)/sizeof(length[0]);
	int N=8;
	cout<<rodCutting(length,profit,N,n);
}
