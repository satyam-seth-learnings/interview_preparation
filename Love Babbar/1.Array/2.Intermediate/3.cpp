//3. You	are	given	a	list	of	n-1	integers	and	these	integers	are	in	the	range	
//of	1	to	n.	There	are	no	duplicates	in	the	list.	One	of	the	integers	is	
//missing	in	the	list.	Write	an	efficient	code	to	find	the	missing	integer.	


//Logic-1

//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int t;
//	cin>>t;
//	while(t--)
//	{
//	    int n;
//	    cin>>n;
//	    vector <int>arr;
//	    for(int i=1;i<n;i++)
//	    {
//	        int ele;
//	        cin>>ele;
//	        arr.push_back(ele);
//	    }
//	    int total=accumulate(arr.begin(),arr.end(),0);
//	    int n_total=n*(n+1)/2;
//    	cout<<n_total-total<<endl;
//	}
//	return 0;
//}

//Logic-2

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int r1=0,r2=0;
		for(int i=1;i<=n;i++)
			r1^=i;
		int arr[n];
		for(int i=0;i<n-1;i++)
			cin>>arr[i];
		for(int i=0;i<n-1;i++)
			r2^=arr[i];
		cout<<(r1^r2)<<endl;
	}
}
