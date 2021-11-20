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

void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
node* searchinbst(node* root,int key){
    if(root==NULL){
        return NULL;
    }
    if(root->data==key){
        return root;
    }
    if(key<root->data){
        return searchinbst(root->left,key);
    }


   return    searchinbst(root->right,key);
}

node* inordersuccesor(node* root){
    node* curr=root;
    while(curr && curr->left!=NULL){
        curr=root->left;
    
    }
    return curr;
}


node* deletion(node* root,int key){
    
    if(key< root->data){
        root->left=deletion(root->left,key);
    }
    else if(key>root->data){
        root->right=deletion(root->right,key);
    }
    else{

   if(root->left==NULL ){
     node* temp=root->right;
     free(root);
     return temp;
   }
  else if(root->right==NULL){
       node* temp=root->left;
       free(root);
       return temp;
   }

   else{
       // case 3-> node has two child
       node* temp=inordersuccesor(root);
       root->data=temp->data;
       root->right=deletion(root->right,temp->data);
   }

    }


return root;

}




int main(){
    node* root=new node(6);
    root->left=new node(4);
    root->right=new node(8);
    root->left->left=new node(2);
    root->left->right=new node(5);
    root->right->right=new node(9);
    root->right->left=new node(7);
    if(searchinbst(root,9)==NULL){
        cout<<"key does not found "<<endl;
    }
    else{
        cout<<"key found"<<endl;
    }
    inorder(root);
    cout<<endl;
    deletion(root,7);
    inorder(root);

    return 0;
}