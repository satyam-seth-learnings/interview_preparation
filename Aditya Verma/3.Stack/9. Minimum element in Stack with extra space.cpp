#include<bits/stdc++.h>
using namespace std;
stack<int> s,ss;
void push(int ele)
{
	s.push(ele);
	if(s.empty() || s.top()>=ele)
		ss.push(ele);
	return;
}
int pop()
{
	if(s.empty())
		return -1;
	int ele=s.top();
	s.pop();
	if(ss.top()==ele)
		ss.pop();
	return ele;
}
int getmin()
{
	if(s.empty())
		return -1;
	return s.top();
}
int main()
{
	while(1)
	{
		cout<<"------- Minimum element in Stack with extra space -------"<<endl;
		cout<<"1.Push"<<endl<<"2.Pop"<<endl<<"3.Min"<<endl<<"4.Exit"<<endl;
		int choice;
		cout<<"Enter choice:";
		cin>>choice;
		switch(choice)
		{
			case 1:
				int ele;
				cout<<"Enter element:";
				cin>>ele;
				push(ele);
				break;
			case 2:
				cout<<pop()<<" Poped"<<endl;
				break;
			case 3:
				cout<<"Min:"<<getmin()<<endl;
				break;
			case 4:
				exit(1);
			default:
				cout<<"Please enter correct choice"<<endl;
		}
	}
	return 0;
}
