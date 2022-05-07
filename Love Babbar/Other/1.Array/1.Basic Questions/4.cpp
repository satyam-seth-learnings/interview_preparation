//4.Write	a	program	to	reverse	the	array.

//Using Recursion
#include<iostream>
#include<algorithm>
using namespace std;
void reverseArray(int arr[],int start,int end)
{
	if(start>=end)
		return;
	swap(arr[start],arr[end]);
	reverseArray(arr,start+1,end-1);
}
int main()
{
	int i,n;
	cout<<"Enter the size of array:";
	cin>>n;
	int *arr=new int[n];
	cout<<"Enter "<<n<<" numbers:"<<endl;
	for(i=0;i<n;i++)
		cin>>arr[i];
	cout<<"Reverse of array:"<<endl;
	reverseArray(arr,0,n-1);
	for(i=0;i<n;i++)
		cout<<arr[i]<<" ";
}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int i,n;
//	cout<<"Enter the size of array:";
//	cin>>n;
//	int *arr=new int[n];
//	cout<<"Enter "<<n<<" numbers:"<<endl;
//	for(i=0;i<n;i++)
//		cin>>arr[i];
//	cout<<"Reverse of array:"<<endl;
//	for(i=0;i<n/2;i++)
//	{
//		int temp;
//		temp=arr[i];
//		arr[i]=arr[n-i-1];
//		arr[n-i-1]=temp;
//	}
//	for(i=0;i<n;i++)
//		cout<<arr[i]<<" ";
//}
