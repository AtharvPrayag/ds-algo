//tree is data type which store the data in tree form.
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
      struct node* left;
      struct node* right;

     public:
      node(int val){
         data=val;
         left=NULL;
         right=NULL;
     }
};
//in preorder binary tree traversal we first cout root then traverse all left subtree and then call all right subtree
//order is root -> leftsubtree -> rightsubtree; 

void preordertraversal(struct node* root){
    //base condition .
    if(root==NULL){
        return ;
    }
cout<<root->data<<" ";
preordertraversal(root->left);
preordertraversal(root->right);
}


void inordertraversal(struct node* root){
if(root==NULL){
    return ;
}
inordertraversal(root->left);
cout<<root->data<<" ";
inordertraversal(root->right);
}


void postordertraversal(struct node* root){
    if(root==NULL){
        return ;
    }
    postordertraversal(root->left);
    postordertraversal(root->right);
    cout<<root->data<<" ";
}
int main(){
     struct node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7); 
   

   preordertraversal(root);
   cout<<endl;
   inordertraversal(root);
   cout<<endl;
   postordertraversal(root);

    return 0;
}