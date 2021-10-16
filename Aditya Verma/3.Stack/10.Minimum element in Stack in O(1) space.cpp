#include<bits/stdc++.h>
using namespace std;
int minEle;
stack<int> s;
void push(int ele)
{
	if(s.empty())
	{
		s.push(ele);
		minEle=ele;
	}
	else
	{
		if(ele>=minEle)
			s.push(ele);
		else if(ele<minEle)
		{
			s.push(2*ele-minEle);
			minEle=ele;	
		}
	}
	return;
}
void pop()
{
	if(s.empty())
		cout<<"Empty"<<endl;
	else 
	{
		if(s.top()>=minEle)
			s.pop();
		else if(s.top()<minEle)
		{
			minEle=2*minEle-s.top();
			s.pop();
		}
		cout<<"Element poped"<<endl;
	}
}
int top()
{
	if(s.empty())
		return -1;
	else
	{
		if(s.top()>=minEle)
			return s.top();
		else if(s.top()<minEle)
			return minEle;
	}
}
int getmin()
{
	if(s.empty())
		return -1;
	return minEle;
}
int main()
{
	while(1)
	{
		cout<<"------- Minimum element in Stack in O(1) space -------"<<endl;
		cout<<"1.Push"<<endl<<"2.Pop"<<endl<<"3.Top"<<endl<<"4.Min"<<endl<<"5.Exit"<<endl;
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
				pop();
				break;
			case 3:
				cout<<"Top:"<<top()<<endl;
				break;
			case 4:
				cout<<"Min:"<<getmin()<<endl;
				break;
			case 5:
				exit(1);
			default:
				cout<<"Please enter correct choice"<<endl;
		}
	}
	return 0;
}
