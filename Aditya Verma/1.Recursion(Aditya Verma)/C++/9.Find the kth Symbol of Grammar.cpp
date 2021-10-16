#include<iostream>
#include<math.h>
using namespace std;
int solve(int n,int k)
{
	if(n==1 || k==1)
		return 0;
	int mid=pow(2,n-1)/2;
	if(k<=mid)
		return solve(n-1,k);
	else
		return !solve(n-1,k-mid);
}
int main()
{
//	Grammar
//	0
//	0 1
//	0 1 1 0
//	0 1 1 0 1 0 0 1
//  Find kth symbol of Grammar
	int n,k;
	cout<<"Enter the value of n and k:";
	cin>>n>>k;
	cout<<solve(n,k);
	return 0;
}
