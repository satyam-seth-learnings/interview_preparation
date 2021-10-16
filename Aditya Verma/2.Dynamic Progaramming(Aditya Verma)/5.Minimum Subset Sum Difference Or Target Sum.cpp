#include<bits/stdc++.h>
using namespace std;
int isSubsetSum(int set[],int n)
{
	int sum=accumulate(set,set+1,0);
	bool t[n+1][sum+1];
	for(int i=0;i<=n;i++)
	{
	    for(int j=0;j<=sum;j++)
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
	int diff=INT_MAX;
	for(int i=0;i<=sum/2;i++)
	{
		int s1=i;
		int s2=sum-s1;
		if(t[n][i]==true and diff>abs(s1-s2))
			diff=abs(s1-s2);
	}
	return diff;
}
int main()
{
	int set[]={1,6,11,5};
	int n=sizeof(set)/sizeof(set[0]);
	cout<<isSubsetSum(set,n);
	return 0;
}
