//https://practice.geeksforgeeks.org/problems/longest-common-substring1452/1#
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends




class Solution{
    public:
    
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        // your code here
        int dp[1001][1001],maxlen=INT_MIN;
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<m+1;j++)
            {
                if(i==0||j==0)
                    dp[i][j]=0;
                else if(S1[i-1]==S2[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else
                    dp[i][j]=0;
                if(maxlen<dp[i][j])
				    maxlen=dp[i][j];
            }
        }
        return maxlen;
    }
};

// { Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr (s1, s2, n, m) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends
