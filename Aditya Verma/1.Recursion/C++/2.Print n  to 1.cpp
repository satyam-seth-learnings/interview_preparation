#include<iostream>
using namespace std;
void Print(int n)
{
	if(n==1)
	{
		cout<<1<<" ";
		return;	
	}
	else
	{
		cout<<n<<" ";
		Print(n-1);
	}
}
int main()
{
	int n;
	cout<<"Enter the value of n:";
	cin>>n;
	Print(n);
	return 0;
}
