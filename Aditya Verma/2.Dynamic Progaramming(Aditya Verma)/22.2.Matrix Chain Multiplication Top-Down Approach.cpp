#include<bits/stdc++.h>
using namespace std;
int t[1001][1001];
int MCM(int arr[],int i,int j)
{
	if(i>=j)
		return 0;
	if(t[i][j]!=-1)
		return t[i][j];
	int mn=INT_MAX;
	for(int k=i;k<=j-1;k++)
	{
		int temp=MCM(arr,i,k)+MCM(arr,k+1,j)+(arr[i-1]*arr[k]*arr[j]);
		if(temp<mn)
			mn=temp;
	}
	return t[i][j]=mn;
}
int main()
{
	memset(t,-1,sizeof(t));
	int arr[]={40,20,30,10,30};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<MCM(arr,1,n-1);
	return 0;
}
