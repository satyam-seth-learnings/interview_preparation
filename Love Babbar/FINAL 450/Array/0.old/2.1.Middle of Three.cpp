// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function template for C++

class Solution{
  public:
    int middle(int A, int B, int C){
        //code here//Position this line where user code will be pasted.
//        Logic-1
        if(A>B && B>C || C>B && B>A)
            return B;
        else if(B>A && A>C || A>B && C>B)
            return A;
        // else if(A>B && C>B || B>A && B>C)
        return C;
        
//        Logic-2
//        int ma=max(max(A,B),max(B,C));
//		int mi=min(min(A,B),min(B,C));
//		return (A+B+C) - mi -ma;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int A,B,C;
        cin>>A>>B>>C;
        Solution ob;
        cout<<ob.middle(A,B,C) <<"\n";
    }
    return 0;
}  // } Driver Code Ends
