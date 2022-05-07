#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s="geeksforgeeks";
	vector<int> v(128,0);
	for(int i=0;i<s.length();i++)
	{
		int c=s[i];
		v[c]++;
	}
	for(int i=0;i<v.size();i++)
		if(v[i]!=0)
			cout<<"Number of Occurrence of "<<(char)i<<" is:"<<v[i]<<endl;
	return 0;
}

//Logic-2
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	string s="geeksforgeeks";
//	map<char,int> M;
//	for(int i=0;i<s.length();i++)
//		M[s.at(i)]++;
//	for(auto i=M.begin();i!=M.end();i++)
//		cout<<"Number of Occurrence of "<<(*i).first<<" is:"<<(*i).second<<endl;
//	return 0;
//}
