#include<iostream>
using namespace std;
void Print(int n)
{
	if(n==1)
		cout<<1<<" ";
	else
	{
		Print(n-1);
		cout<<n<<" ";
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
