//normal approach doest showing any output.

//optimised approach showing correct output.
#include<bits/stdc++.h>
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

/*bool getpath(node* root,int key,vector<int>&path){
    if(root == NULL){
        return false;
    }
    path.push_back(root->data);
    if(root->data==key){
        return true;
    }
    if(getpath(root->left,key,path) || getpath(root->right,key,path)){
        return true;
    }
    path.pop_back();
    return false;



}


int lca(node*root,int n1,int n2){
    vector<int>path1;
    vector<int>path2;

    if(!getpath(root,n1,path1) || !getpath(root,n2,path2) ){
        return -1;
    }

    int pc;
    for(int pc=0;pc<path1.size()&&path2.size();pc++){
        if(path1[pc]!=path2[pc]){
            break;
        }
    }


return path1[pc-1];


}*/

node* lca2(node*root,int n1,int n2){
    if(root==NULL){
        return NULL;
    }

if(root->data==n1 || root->data== n2){
    return root;
}


node* leftlca=lca2(root->left,n1,n2);
node* rightlca=lca2(root->right,n1,n2);

if(leftlca && rightlca){
    return root;
}
if(leftlca!=NULL){
    return leftlca;
}
return rightlca;



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

node* ans=lca2(root,7,8);
cout<<ans->data;

    return 0;
}