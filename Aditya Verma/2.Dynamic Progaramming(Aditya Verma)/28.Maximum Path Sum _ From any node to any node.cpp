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
	int temp=max(max(l,r)+root->val,root->val);
	int ans=max(temp,l+r+root->val);
	res=max(res,ans);
	return temp;
}
int main()
{
	struct Node *root=newNode(10);
    root->left=newNode(2);
    root->right=newNode(10);
    root->left->left=newNode(20);
    root->left->right=newNode(1);
    root->right->right=newNode(-25);
    root->right->right->left=newNode(3);
    root->right->right->right=newNode(4);
	int res=INT_MIN;
	solve(root,res);
	cout<<res;
	return 0;
}
