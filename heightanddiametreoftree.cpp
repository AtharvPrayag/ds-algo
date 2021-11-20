//q.1)height and diametre of binary tree.
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
//height of tree is maximum no of node present from deepeset node to root node .
int calheight(node*root){
    if(root==NULL){
        return 0;
    }
int lheight=calheight(root->left);
int rheight=calheight(root->right);

return max(lheight,rheight)+1;

}


//maximum no of nodes between any two node in given binary tree is diametre of an binary tree.
int caldiamtre(node*root){
    if(root==NULL){
        return 0;
    }
    int lheight=calheight(root->left);
    int rheight=calheight(root->right);
    int currdiamtre=lheight+rheight+1;

    return max(currdiamtre,max(lheight,rheight));


}








int main(){

node* root=new node(1);
root->left=new node(2);
root->right=new node(3);
root->left->left=new node(4);
root->left->right=new node(5);
root->right->left=new node(6);
root->right->right=new node(7);
//root->left->left->left=new node(8);
cout<<calheight(root);
cout<<endl;
cout<<caldiamtre(root);

return 0;}