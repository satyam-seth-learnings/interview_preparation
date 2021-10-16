#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int val;
	struct Node* left,*right;
};
struct Node* newNode(int val)
{
    struct Node* node=(struct Node*)malloc(sizeof(struct Node));
    node->val=val;
    node->left=NULL;
    node->right=NULL;
 	return node;
}
int solve(Node* root,int &res)
{
	if(root==nullptr)
		return 0;
	int l=solve(root->left,res);
	int r=solve(root->right,res);
	int temp=max(l,r)+1;
	int ans=max(temp,1+l+r);
	res=max(res,ans);
	return temp;
}
int main()
{
	struct Node* root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);
	int res=INT_MIN;
	solve(root,res);
	cout<<res;
	return 0;
}
