//2.Check	whether	n	is	present	in	an	array	of	size	m	or	not

//Using STL
#include<iostream>
#include<iterator>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int n,m;
	cout<<"Enter a number:";
	cin>>n;
	cout<<"Enter the size of array:";
	cin>>m;
	vector <int> arr;
	cout<<"Enter "<<m<<" numbers:"<<endl;
	for(int i=0;i<m;i++)
	{
		int x;
		cin>>x;
		arr.push_back(x);
	}
	vector<int>::iterator flag=find(begin(arr),end(arr),n);
	if(*flag==n)
		cout<<"TRUE";
	else
		cout<<"FALSE";
	return 0;
}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int n,m,i;
//	cout<<"Enter a number:";
//	cin>>n;
//	cout<<"Enter the size of array:";
//	cin>>m;
//	int *arr=new(nothrow) int[m];
//	if(arr==NULL)
//		cout<<"Not enough memory for creating array.";
//	else
//	{
//		int flag=0;
//		cout<<"Enter "<<m<<" numbers:"<<endl;
//		for(i=0;i<m;i++) 
//			cin>>arr[i];
//		for(i=0;i<m;i++)
//			if(n==arr[i])
//			{
//				flag=1;
//				break;
//			}
//		if(flag==1)
//			cout<<"TRUE";
//		else
//			cout<<"FALSE";
//	}
//	return 0;
//}
