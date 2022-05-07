//5.Write	a	program	to	sort	the	given	array.	
#include<iostream>
using namespace std;
int main()
{
	int i,j,n,*arr=NULL;
	cout<<"Enter the size of array:";
	cin>>n;
	arr=new int[n];
	cout<<"Enter "<<n<<" numbers:"<<endl;
	for(i=0;i<n;i++)
		cin>>arr[i];
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
	cout<<"Sorted array:"<<endl;
	for(i=0;i<n;i++)
		cout<<arr[i]<<endl;
}
