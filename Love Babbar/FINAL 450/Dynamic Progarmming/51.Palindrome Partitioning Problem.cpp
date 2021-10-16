//https://practice.geeksforgeeks.org/problems/palindromic-patitioning4845/1
// { Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


// User function Template for C++

class Solution{
public:
    int dp[501][501];
    bool isPal(string s,int i,int j)
    {
        while(i<j)
        {
            if(s[i]!=s[j]) 
                return false;
            i++;
            j--;
        }
        return true;
    }
    int solve(string s,int i,int j)
    {
        if(i>=j) 
            return 0;
        if(isPal(s,i,j))
            return dp[i][j]=0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        int ans=INT_MAX;
        for(int k=i;k<j;k++)
        {
            if(isPal(s,i,k))
            {
                int left,right,temp;
                if(dp[i][k]!=-1)
                    left=dp[i][k];
                else
                {
                    left=solve(s,i,k);
                    dp[i][k]=left;
                }
                if(dp[k+1][j]!=-1)
                    right=dp[k+1][j]; 
                else
                {
                    right=solve(s,k+1,j);
                    dp[k+1][j]=right;
                }
                temp=left+right+1;
                ans=min(ans,temp);
            }
        }
        return dp[i][j]=ans;
    }
    int palindromicPartition(string str)
    {
        // code here
        memset(dp,-1,sizeof(dp));
        return solve(str,0,str.length()-1);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
