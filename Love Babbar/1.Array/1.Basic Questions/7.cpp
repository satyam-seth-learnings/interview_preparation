//7.Given	an	number	n.	Find	the	number	of	occurrences	of	n	in	the	array.

//Using STL
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int i,n,num,*arr=NULL;
	cout<<"Enter the number to count:";
	cin>>num;
	cout<<"Enter the size of array:";
	cin>>n;
	cout<<"Enter "<<n<<" numbers:"<<endl;
	arr=new int[n];
	for(i=0;i<n;i++)
		cin>>arr[i];
	cout<<"Count:"<<count(arr,arr+n,num);
}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int i,n,num,count=0,*arr=NULL;
//	cout<<"Enter the number to count:";
//	cin>>num;
//	cout<<"Enter the size of array:";
//	cin>>n;
//	cout<<"Enter "<<n<<" numbers:"<<endl;
//	arr=new int[n];
//	for(i=0;i<n;i++)
//		cin>>arr[i];
//	for(i=0;i<n;i++)
//	{
//		if(arr[i]==num)
//			count+=1;
//	}
//	cout<<"Count:"<<count;
//}
