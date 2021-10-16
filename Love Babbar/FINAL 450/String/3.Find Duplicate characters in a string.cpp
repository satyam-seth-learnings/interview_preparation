// https://www.geeksforgeeks.org/print-all-the-duplicates-in-the-input-string/
#include<bits/stdc++.h>
using namespace std;
void printDup(string s)
{
	unordered_map<char,int> m;
	for(auto ch:s)
		m[ch]++;
	for(auto k:m)
		if(k.second>1)
			cout<<k.first<<" ";
}
int main()
{
	string s;
	printDup(s);
	return 0;
}