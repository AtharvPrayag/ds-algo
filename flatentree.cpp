//we have to convert the binary tree into linked list form .
#include<bits/stdc++.h>
//#include<vector>



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

void preorder(node*root){
    if(root==NULL){
        return ;
    }

   cout<<root->data<<" ";
   preorder(root->left);
   preorder(root->right);
}


void flaten(node* root,node*prev){
    
    if(root==NULL){
        return ;
    }
    

flaten(root->right,prev);
flaten(root->left,prev);

root->right=prev;
root->left=NULL;

prev=root;

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
node*prev=NULL;
preorder(root);
cout<<endl;
flaten(root,prev);
preorder(root);

return 0;
}