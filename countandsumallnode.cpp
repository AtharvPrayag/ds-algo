//q.1) count all the node in given binary tree.
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node*left;
    node*right;
    public:
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

int countnode(node*root){
    if(root==NULL){
        return 0;
    }
    return countnode(root->left)+countnode(root->right)+1;
}


int sumofallnode(node*root){
if(root==NULL){
    return 0;
}

return sumofallnode(root->left)+sumofallnode(root->right)+root->data;

}





int main(){

node* root=new node(1);
root->left=new node(2);
root->right=new node(3);
root->left->left=new node(4);
root->left->right=new node(5);
root->right->left=new node(6);
root->right->right=new node(7);
cout<<countnode(root);
cout<<endl;
cout<<sumofallnode(root);
return 0;
}