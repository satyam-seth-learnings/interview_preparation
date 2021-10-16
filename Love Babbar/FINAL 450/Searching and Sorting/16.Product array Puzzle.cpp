//https://practice.geeksforgeeks.org/problems/product-array-puzzle4525/1#
// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

vector<long long int> productExceptSelf(vector<long long int>&, int );

// your code will be pasted here

int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        
        vec = productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}// } Driver Code Ends


//User function template for C++

// nums: given vector
// return the Product vector P that hold product except self at each index
vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
   
    //code here

//    Logic-1
//		long long int L[n],R[n];
//    vector<long long int> prod;
//    L[0]=1;
//    for(int i=1;i<n;i++)
//        L[i]=L[i-1]*nums[i-1];
//    R[n-1]=1;
//    for(int i=n-2;i>=0;i--)
//        R[i]=R[i+1]*nums[i+1];
//    for(int i=0;i<n;i++)
//        prod.push_back(L[i]*R[i]);
//    return prod;

//    Logic-2
    long long int L=1,R=1;
    vector<long long int> prod;
    prod.push_back(1);
    for(int i=1;i<n;i++)
        prod.push_back(prod[i-1]*nums[i-1]);
    for(int i=n-1;i>=0;i--)
    {
        prod[i]*=R;
        R*=nums[i];
    }
    return prod;
}
