//https://www.geeksforgeeks.org/subset-sum-problem-dp-25/
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Returns the maximum value that  
// can be put in a knapsack of capacity W 

//Logic-1
//int knapSack(int W, int wt[], int val[], int n) 
//{ 
//   // Your code here
//    int static t[1001][1001];
//    if(W==0||n==0)
//        return 0;
//    if(t[n][W]!=0)
//        return t[n][W];
//    if(wt[n-1]<=W)
//        return t[n][W]=max(val[n-1]+knapSack(W-wt[n-1],wt,val,n-1),knapSack(W,wt,val,n-1));
//    return t[n][W]=knapSack(W,wt,val,n-1);
//}


//Logic-2
//int knapSack(int W, int wt[], int val[], int n) 
//{ 
   // Your code here
//    int static t[1001][1001];
//    for(int i=0;i<n+1;i++)
//        for(int j=0;j<W+1;j++)
//        {
//            if(i==0||j==0)
//                t[i][j]=0;
//            else if(wt[i-1]<=j)
//                t[i][j]=max(val[i-1]+t[i-1][j-wt[i-1]],t[i-1][j]);
//            else
//                t[i][j]=t[i-1][j];
//        }
//    return t[n][W];
//}




// { Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        
        //calling method knapSack()
        cout<<knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends
