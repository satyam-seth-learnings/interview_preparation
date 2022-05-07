//6.Find the Kth largest and Kth smallest number in an	array.

//Using STL
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int i,j,k,n,*arr=NULL;
	cout<<"Enter the value of k:";
	cin>>k;
	cout<<"Enter the size of array:";
	cin>>n;
	if(k>n)
	{
		cout<<"Value of K is must be lessthan or equal to the size of array.";
	}
	else
	{
		arr=new int[n];
		cout<<"Enter "<<n<<" numbers:"<<endl;
		for(i=0;i<n;i++)
			cin>>arr[i];
		sort(arr,arr+n);
		for(i=0;i<n;i++)
			cout<<arr[i]<<" ";
		cout<<"Largest:"<<arr[n-k]<<endl;
		cout<<"Smallest:"<<arr[k-1]<<endl;
	}
}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int i,j,k,n,*arr=NULL;
//	cout<<"Enter the value of k:";
//	cin>>k;
//	cout<<"Enter the size of array:";
//	cin>>n;
//	if(k>n)
//	{
//		cout<<"Value of K is must be lessthan or equal to the size of array.";
//	}
//	else
//	{
//		arr=new int[n];
//		cout<<"Enter "<<n<<" numbers:"<<endl;
//		for(i=0;i<n;i++)
//			cin>>arr[i];
//		for(i=0;i<n-1;i++)
//			for(j=0;j<n-1-i;j++)
//				if(arr[j]>arr[j+1])
//				{
//					int temp=arr[j];
//					arr[j]=arr[j+1];
//					arr[j+1]=temp;
//				}
//		
//		cout<<"Largest:"<<arr[n-k]<<endl;
//		cout<<"Smallest:"<<arr[k-1]<<endl;
//	}
//}
