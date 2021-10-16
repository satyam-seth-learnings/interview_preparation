//10.Move all the	negative	elements	to	one	side	of	the	array

//Logic-1
#include<iostream>
#include<algorithm>
using namespace std;
void move(int arr[],int n)
{
	int j=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]<0)
		{
			swap(arr[i],arr[j]);
			j++;
		}
	}
}
int main()
{
	int n;
	cout<<"Enter the size of array:";
	cin>>n;
	int *arr=new int[n];
	cout<<"Enter "<<n<<" elements:"<<endl;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	move(arr,n);
	cout<<"After moving array:"<<endl;
	for(int i=0;i<n;i++)
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
//	int n,pvot;
//	cout<<"Enter the size of array:";
//	cin>>n;
//	int *arr=new int[n];
//	cout<<"Enter "<<n<<" elements:"<<endl;
//	for(int i=0;i<n;i++)
//		cin>>arr[i];
//	int i=0,j=n-1;
//	while(1)
//	{
//		while(arr[i]<0 && i<j)
//			i++;
//		while(arr[j]>0 && i<j)
//			j--;
//		if(i<j)
//		{
//			swap(arr[i],arr[j]);
//			i++,j--;
//		}
//		else
//			break;
//	}
//	cout<<"After sorting array:"<<endl;
//	for(int i=0;i<n;i++)
//		cout<<arr[i]<<endl;
//}
