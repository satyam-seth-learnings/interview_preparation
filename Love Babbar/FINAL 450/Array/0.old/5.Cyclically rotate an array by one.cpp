//https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one/0
#include<bits/stdc++.h>
using namespace std;
void rotate(vector <int>arr,int n)
{
	int temp=arr[n-1];
	for(int i=n-1;i>0;i--)
		arr[i]=arr[i-1];
	arr[0]=temp;
    for(auto i:arr)
        cout<<i<<" ";
    cout<<endl;
    return;
}
void insert()
{
    int n;
    cin>>n;
    vector <int>v;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    rotate(v,n);
    return;
}
int main()
{
	int t;
	cin>>t;
	while(t)
	{
	    insert();
	    t--;
	}
	return 0;
}
