//we have given a sorted array.
//we have to build a balenced binary search tree from it
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

node* bstfromsortedarray(int array[],int st,int end){


if(st>end){
    return NULL;
}
    int mid=(st+end)/2;
    node* root=new node(array[mid]);

    root->left=bstfromsortedarray(array,st,mid-1);
    root->right=bstfromsortedarray(array,mid+1,end);

    return root;
}
void preorder(node* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main(){

int array[]={10,20,30,40,50};  
int st=0;
int end=4;
node* root=bstfromsortedarray(array,st,end);
cout<<root->data<<endl;
preorder(root);

    return 0;
}