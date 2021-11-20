// we have to find the the minimum distance between two given nodes.
#include<bits/stdc++.h>
using namespace std;
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

int distance(node*root,int k,int dist){
    if(root==NULL){
        return -1;
    }

    if(root->data==k){
        return dist;
    }
    int left=distance(root->left,k,dist+1);
    if(left!=-1){
        return left;
    }
    return distance(root->right,k,dist+1);
}


node* lca(node*root,int n1,int n2){
    if(root==NULL){
        return NULL;
    }


if( root->data==n1 || root->data==n2 ){
    return root;
}

node* left=lca(root->left,n1,n2);
node* right=lca(root->right,n1,n2);

if(left!=NULL && right!=NULL){
    return root;
}

if(left==NULL && right==NULL){
    return NULL;
}
if(left==NULL && right!=NULL){
    return right;
}
return left;
}


int minimumdist(node*root,int n1,int n2){
    node * LCA=lca(root,n1,n2);
    int d1=distance(LCA,n1,0);
    int d2=distance(LCA,n2,0);

    return d1+d2;

}







int main(){

node* root=new node(1);
root->left=new node(2);
root->right=new node(3);
root->left->left=new node(4);
root->left->right=new node(5);
root->right->left=new node(6);
root->right->right=new node(7);
//root->right->left->left=new node(8);

cout<<minimumdist(root,4,5);


    return 0;
}