// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
void sort012(int[],int);

int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

// } Driver Code Ends

// Logic-1 
// void sort012(int a[], int n)
// {
//     // coode here
//     int count0=0,count1=0,count2=0;
//     for(int i=0;i<n;i++)
//     {
//         if(a[i]==0)
//             count0++;
//         else if(a[i]==1)
//             count1++;
//         else
//             count2++;
//     }
//     int i=0;
//     while(count0>0)
//     {
//         a[i++]=0;
//         count0--;
//     }
//     while(count1>0)
//     {
//         a[i++]=1;
//         count1--;
//     }
//     while(count2>0)
//     {
//         a[i++]=2;
//         count2--;
//     }
// }

// Logic-2
void sort012(int a[], int n)
{
    // coode here
    int low=0,mid=0,high=n-1;
    for(int i=0;i<n;i++)
    {
        if(a[mid]==0)
        {
            swap(a[low],a[mid]);
            low++;
            mid++;
        }
        else if(a[mid]==2)
        {
          swap(a[mid],a[high]);
          high--;
        }
        else
            mid++;
    }
}