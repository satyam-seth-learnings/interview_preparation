/*1.Create an Array of size 10 of integers. Take input from the user for 
these 10	elements and print the entire array	after that.	*/

// Using STL array
#include<iostream>
#include<array>
using namespace std;
int main()
{
	array <int,10> arr;
	cout<<"Enter the 10 elements:";
	for(int i=0;i<arr.size();i++)
		cin>>arr[i];
	cout<<"Elements of Array are:"<<endl;
	for(int i=0;i<10;i++)
		cout<<arr[i]<<endl;
	return 0;
}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int i,arr[10];
//	cout<<"Enter the 10 elements:";
//	for(i=0;i<10;i++)
//		cin>>arr[i];
//	cout<<"Elements of Array are:"<<endl;
//	for(i=0;i<10;i++)
//		cout<<arr[i]<<endl;
//}
