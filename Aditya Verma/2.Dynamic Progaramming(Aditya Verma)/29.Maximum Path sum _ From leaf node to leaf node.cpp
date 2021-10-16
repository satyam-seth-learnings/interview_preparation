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
	int temp=max(l,r)+root->val;
	if(root->left==nullptr && root->right==nullptr)
		temp=max(temp,root->val);
	int ans=max(temp,l+r+root->val);
	res=max(res,ans);
	return temp;
}
int main()
{
	struct Node *root=newNode(-15);
    root->left=newNode(5);
    root->right=newNode(6);
    root->left->left=newNode(-8);
    root->left->right=newNode(1);
    root->left->left->left=newNode(2);
    root->left->left->right=newNode(6);
    root->right->left=newNode(3);
    root->right->right=newNode(9);
    root->right->right->right=newNode(0);
    root->right->right->right->left=newNode(4);
    root->right->right->right->right=newNode(-1);
    root->right->right->right->right->left=newNode(10);
	int res=INT_MIN;
	solve(root,res);
	cout<<res;
	return 0;
}
