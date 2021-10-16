//4. Find	all	pairs	on	integer	array	whose	sum	is	equal	to	given	number.

//Logic-1

//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int arr[]={10,20,30,50,40,80};
//	int n;
//	cin>>n;
//	for(int i=0;i<49;i++)
//		for(int j=i+1;j<49;j++)
//			if(arr[i]+arr[j]==n)
//				cout<<arr[i]<<" "<<arr[j]<<endl;
//	return 0;
//}

//Logic-2
//only for distinct elements

//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n;
//	cin>>n;
//	int arr[n];
//	for(int i=0;i<n;i++)
//		cin>>arr[i];
//	int sum,count=0;
//	cin>>sum;
//	sort(arr,arr+n);
//	int l=0,r=n-1;
//	while(l<r)
//	{
//		if(arr[l]+arr[r]<sum)
//			l++;
//		if(arr[l]+arr[r]>sum)
//			r--;
//		else
//		{
//				count++;
//			l++;	// or r++;
//		}		
//	}
//	cout<<count<<endl;
//}

//Logic-3
//#include<bits/stdc++.h>
//using namespace std;
//int solve(int arr[],int n,int k)
//{
//	unordered_map <int,int>m;
//	for(int i=0;i<n;i++)
//		m[arr[i]]++;
//	int 
//	for(int i=0;i<n;i++)
//		
//}
//int main()
//{
//	int arr[]={1, 5, 7, -1, 5};
//	int n=sizeof(arr)/sizeof(arr[0]);
//	int k;
//	cin>>k;
//	solve(arr,n,k);
//	return 0;
//}



#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=49;
//	cin>>n;
	int arr[]={48,24,99,51,33,39,29,83,74,72,22,46,40,51,67,37,78,76,26,28,76,25,10,65,64,47,34,88,26,49,86,73,73,36,75,5,26,4,39,99,27,12,97,67,63,15,3,92,90};
//	for(int i=0;i<n;i++)
//		cin>>arr[i];
	int sum=50;
//	cin>>sum;
	for(int i=0;i<n;i++)
		arr[i]=abs(arr[i]-sum);
//	for(int i=0;i<n;i++)
//		cout<<arr[i]<<" ";
	int count=0;
	for(int i=0;i<n;i++)
		if(arr[i]<n/2)
			count+=1;
	cout<<endl<<count;
}

