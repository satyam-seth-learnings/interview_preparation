#include<bits/stdc++.h>
using namespace std;
int fib(int n)
{
	if(n<=1)
        return n;
    return fib(n-1)+fib(n-2);
}
int main()
{
	int a=0,b=1,c,n;
	cin>>n;
	for(int i=1;i<=n;i++)
		cout<<fib(i)<<" ";
	return 0;
}
