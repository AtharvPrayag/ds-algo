#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
    
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

node* insertinbst(node* root,int val){
      
      if(root==NULL){
          return new node(val);
      }

   
    if(val<root->data){

        root->left=insertinbst(root->left,val);

    }

    else{  //val>root->data)

    root->right=insertinbst(root->right,val);

    }

    return root;


}
void inorder(node* root){
    if(root==NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    node* root=NULL;
    root=insertinbst(root,5);
    insertinbst(root,8);
    insertinbst(root,4);
    insertinbst(root,2);
    insertinbst(root,7);
    
    inorder(root);



    return 0;
}