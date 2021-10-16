#include<iostream>
using namespace std;
void min_max(int arr[],int n)
{
	int min=arr[0];
	int max=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]<min)
			min=arr[i];
		if(arr[i]>max)
			max=arr[i];
	}
	cout<<"Minimum Element: "<<min<<endl<<"Maximum Eleement: "<<max;
}
int main()
{
	int arr[]={1000, 11, 445, 1, 330, 3000};
	int n=sizeof(arr)/sizeof(arr[0]);
	min_max(arr,n);
	return 0;
}
