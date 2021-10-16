/*9.Find	the	range	of	the	array.	Range	means	the	difference	between	the	
maximum	and	minimum	element	in	the	array */
#include<iostream>
using namespace std;
int main()
{
	int i,n,min,max;
	cout<<"Enter the size of array:";
	cin>>n;
	int *arr=new int[n];
	cout<<"Enter "<<n<<" numbers:"<<endl;
	for(i=0;i<n;i++)
		cin>>arr[i];
	min=max=arr[0];
	for(i=0;i<n;i++)
	{
		if(min>arr[i])
			min=arr[i];
		else if(max<arr[i])
			max=arr[i];
	}
	cout<<"Range:"<<max-min;
}
