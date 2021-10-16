//https://leetcode.com/problems/longest-palindromic-subsequence/
class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int n=s.length();
        int dp[n+1][n+1];
        string s1=s;
        reverse(s.begin(),s.end());
        string s2=s;
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<n+1;j++)
            {
                if(i==0||j==0)
                    dp[i][j]=0;
                else if(s1[i-1]==s2[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[n][n];
    }
};
