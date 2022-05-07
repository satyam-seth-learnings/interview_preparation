#include<iostream>
#include<vector>
using namespace std;
void sort(vector <int>&);
void insert(vector <int>&,int);
int main()
{
	vector <int>v{5,8,7,1,6};
	cout<<"Before Sorting Array: ";
	for(auto x:v)
		cout<<x<<" ";
	sort(v);
	cout<<endl<<"After Sorting Array: ";
	for(auto x:v)
		cout<<x<<" ";
	return 0;
}
void sort(vector <int> &v)
{
	if(v.size()==1)
		return;
	int temp=v.at(v.size()-1);
	v.pop_back();
	sort(v);
	insert(v,temp);
	return;
}
void insert(vector <int> &v,int temp)
{
	if(v.size()==0 || v.at(v.size()-1)<=temp)
	{
		v.push_back(temp);
		return;
	}
	int val=v.at(v.size()-1);
	v.pop_back();
	insert(v,temp);
	v.push_back(val);
	return;
}
