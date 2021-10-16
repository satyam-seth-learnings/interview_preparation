#include<bits/stdc++.h>
using namespace std;
int rainWaterTrapping(int arr[],int n)
{
	int maxl[n],maxr[n],water[n];
	maxl[0]=arr[0];
	for(int i=0;i<n;i++)
		maxl[i]=max(maxl[i-1],arr[i]);
	maxr[n-1]=arr[n-1];
	for(int i=n-2;i>=0;i--)
		maxr[i]=max(maxr[i+1],arr[i]);
	for(int i=0;i<n;i++)
		water[i]=min(maxl[i],maxr[i])-arr[i];
	return accumulate(water,water+n,0);
}
int main()
{
	int arr[]={3,0,0,2,0,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<rainWaterTrapping(arr,n);	
	return 0;
	
}
