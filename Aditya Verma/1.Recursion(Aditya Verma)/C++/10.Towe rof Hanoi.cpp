#include<iostream>
#include<math.h>
using namespace std;
void solve(char s,char d,char h,int n,int &count)
{
	count++;
	if(n==1)
	{
		cout<<"Disk "<<n<<" moved from "<<s<<" to "<<d<<endl;
		return;
	}
	solve(s,h,d,n-1,count);
	cout<<"Disk "<<n<<" moved from "<<s<<" to "<<d<<endl;
	solve(h,d,s,n-1,count);
	return;
}
int main()
{
	int n,count=0;
	cout<<"Enter the value of n:";
	cin>>n;
	solve('A','C','B',n,count);
	cout<<"Total Steps:"<<count;
	return 0;
}
