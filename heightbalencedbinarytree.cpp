//given treee is height balenced if for each node difference between its left chid height and
//right child height is <=1.then tree is balence 
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
//timecomplexity ids o(n*n);
// int height(node*root){
//     if(root==NULL){
//         return 0;
//     }
//     int lh=height(root->left);
//     int rh=height(root->right);

//     return max(lh,rh)+1;
// }

// bool isbalenced(node*root){

//     if(root==NULL){
//         return true ;
//     }
//     if(isbalenced(root->left)==false){
//         return false;
//     }
//     if(isbalenced(root->right)==false){
//         return false;
//     }

//     int lh=height(root->left);
//     int rh=height(root->right);

//     if(abs(lh-rh)<=1){
//         return true;
//     }
//     else{
//         return false;
//     }

// }

//methode.2) more optimised approach.
//time complexity is o(n).
bool isbalenced(node*root,int *height){
    if(root==NULL){
        return true;
    }
    int lh=0;int rh=0;
    if(isbalenced(root->left,&lh)==false){
        return false;
    }
    if(isbalenced(root->right,&rh)==false){
        return false;
    }

    *height=max(lh,rh)+1;
    if(abs(lh-rh<=1)){
        return true;
    }
    else{
        return false;
    }
}



















int main(){
int height=0;
node* root=new node(1);
root->left=new node(2);
root->right=new node(3);
root->left->left=new node(4);
root->left->left->left=new node(10);
//root->left->left->left=new node(5);
//root->left->right=new node(5);
root->right->left=new node(6);
root->right->right=new node(7);
if(isbalenced(root,&height)){
    cout<<"height is balenced";
}
else{
    cout<<"height is not balence";
}
return 0;}