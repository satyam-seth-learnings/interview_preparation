//https://www.geeksforgeeks.org/subset-sum-problem-dp-25/
#include<bits/stdc++.h>
using namespace std;
bool isSubsetSum(int set[],int n,int sum)
{
	if(n==0)
		return false;
	if(sum==0)
		return true;
	if(set[n-1]<=sum)
		return isSubsetSum(set,n-1,sum-set[n-1]) || isSubsetSum(set,n-1,sum);
	return isSubsetSum(set,n-1,sum);
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

