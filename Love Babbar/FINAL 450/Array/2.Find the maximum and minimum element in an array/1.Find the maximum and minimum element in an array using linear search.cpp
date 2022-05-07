// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}// } Driver Code Ends


// Approach - 1
// Time Complacity - O(n)
// Space Complacity - O(1)

pair<long long, long long> getMinMax(long long a[], int n) {
    pair<ll, ll> minMaxPair (a[0], a[0]);
    for (int i=0; i<n; i++){
        if(a[i]<minMaxPair.first)
            minMaxPair.first=a[i];
        if(a[i]>minMaxPair.second)
            minMaxPair.second=a[i];
    }
    return minMaxPair;
}