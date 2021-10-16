//3.Find the minimum and maximum element in	an array.


//Using STL
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the size of array:";
	cin>>n;
	vector <int>arr;
	cout<<"Enter "<<n<<" numbers:";
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		arr.push_back(x);
	}
	cout<<"MAX:"<<*max_element(arr.begin(),arr.end())<<endl<<"MIN:"<<*min_element(arr.begin(),arr.end());
}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int *arr=NULL,n,i,max,min;
//	cout<<"Enter the size of array:";
//	cin>>n;
//	arr=new int[n];
//	cout<<"Enter "<<n<<" numbers:";
//	for(i=0;i<n;i++)
//		cin>>arr[i];
//	max=min=arr[0];
//	for(i=0;i<n;i++)
//	{
//		if(arr[i]<min)
//			min=arr[i];
//		if(arr[i]>max)
//			max=arr[i];
//	}
//	cout<<"MAX:"<<max<<endl<<"MIN:"<<min;
//}
