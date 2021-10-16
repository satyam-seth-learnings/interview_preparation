// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


// User function Template for C++

class Solution{
public:
	
//	Logic-1
//    bool isSubsetSum(int set[],int n,int sum)
//	{
//		if(n==0)
//			return false;
//		if(sum==0)
//			return true;
//		if(set[n-1]<=sum)
//			return isSubsetSum(set,n-1,sum-set[n-1]) || isSubsetSum(set,n-1,sum);
//		return isSubsetSum(set,n-1,sum);
//	}

	
//	Logic-2
//	bool isSubsetSum(int set[],int n,int sum)
//	{
//		int static t[1001][1001];
//		if(n==0)
//			return false;
//		if(sum==0)
//			return true;
//		if(t[n][sum]!=false)
//			return t[n][sum];
//		if(set[n-1]<=sum)
//			return t[n][sum]=isSubsetSum(set,n-1,sum-set[n-1]) || isSubsetSum(set,n-1,sum);
//		return t[n][sum]=isSubsetSum(set,n-1,sum);
//	}

//	Logic-3
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
	
    int equalPartition(int N, int arr[])
    {
        // code here
        int sum=accumulate(arr,arr+N,0);
        if(sum%2!=0)
            return 0;
        return isSubsetSum(arr,N,sum/2);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}  // } Driver Code Ends
