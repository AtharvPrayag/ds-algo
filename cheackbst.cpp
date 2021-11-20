#include<iostream>
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

bool isbst(node* root,node* min,node* max){
    if(root==NULL){
        return true;
    }
    if(min!=NULL && root->data<=min->data){
        return false;
    }
    if(max!=NULL && root->data>max->data){
        return false;
    }
    bool left=isbst(root->left,min,root);
    bool right=isbst(root->right,root,max);

    return left && right;
}
int main(){
node* root=new node(5);
root->left=new node(9);
root->right=new node(6);
if(isbst(root,NULL,NULL)){
    cout<<" is bst";
}
else{
    cout<<"not bst ";
}


    return 0;
}