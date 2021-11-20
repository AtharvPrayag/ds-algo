#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
    //public:
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
int maxpathsumutil(node* root,int &ans){
    if(root==NULL){
        return 0;
    }
    int left = maxpathsumutil(root->left,ans);
    int right = maxpathsumutil(root->right,ans);
    int ms=max(max(left,right)+root->data,root->data);
    int m21=max(ms,left+right+root->data);
     ans=max(ans,m21);
    return ms;
}





int maxpathsum(node* root){
    int ans=INT_MIN;
    maxpathsumutil(root,ans);
    return ans;
}




int main(){


node* root=new node(1);
root->left=new node(2);
root->right=new node(3);
root->left->left=new node(4);
root->left->right=new node(5);
root->right->left=new node(6);
root->right->right=new node(7);
root->right->left->left=new node(8);
cout<<maxpathsum(root);


return 0;
}