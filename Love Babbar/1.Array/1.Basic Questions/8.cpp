//8.Given	an	array	which	consists	of	only	0,	1	and	2.	Sort	the	array	without	using	any	sorting	algorithm


//Logic-1
#include<iostream>
using namespace std;
int main()
{
	int i,n,zeros=0,ones=0,twos=0;
	cout<<"Enter the size of array:";
	cin>>n;
	int *arr=new int[n];
	cout<<"Enter "<<n<<" elements:"<<endl;
	for(i=0;i<n;i++)
		cin>>arr[i];
	for(i=0;i<n;i++)
	{
		if(arr[i]==0)
			zeros++;
		else if(arr[i]==1)
			ones++;
		else
			twos++;
	}
	int j=0;
	while(zeros)
	{
		arr[j]=0;
		j++;
		zeros--;
	}
	while(ones)
	{
		arr[j]=1;
		j++;
		ones--;
	}
	while(twos)
	{
		arr[j]=2;
		j++;
		twos--;
	}
	cout<<"After sorting array:"<<endl;
	for(i=0;i<n;i++)
		cout<<arr[i]<<endl;
}

//Logic-2
//#include<iostream>
//using namespace std;
//void swap(int &x, int &y)
//{ 
//    int temp = x; 
//    x = y; 
//    y = temp; 
//}
//int main()
//{
//	int i,n,low,mid,high;
//	cout<<"Enter the size of array:";
//	cin>>n;
//	int *arr=new int[n];
//	cout<<"Enter "<<n<<" elements:"<<endl;
//	for(i=0;i<n;i++)
//		cin>>arr[i];
//	low=mid=0;
//	high=n-1;
//	while(mid<=high)
//	{
//		switch(arr[mid])
//		{
//			case 0:
//				swap(arr[low],arr[mid]);
//				low++,mid++;
//				break;
//			case 1:
//				mid++;
//				break;
//			case 2:
//				swap(arr[mid],arr[high]);
//				high--;
//				break;
//		}
//	}
//	cout<<"After sorting array:"<<endl;
//	for(i=0;i<n;i++)
//		cout<<arr[i]<<endl;
//}
