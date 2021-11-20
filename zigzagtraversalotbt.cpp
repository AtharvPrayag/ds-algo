//we have to print the nodes at each level in zigzag manner 
//means at 1st level print from left to right and in 2nd level print 
//from right to left .
#include<iostream>
#include<stack>
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

void zigzagtraversal(node* root){

    stack<node*>currentnode;
    stack<node*>nextnode;             //make two stack.
    currentnode.push(root);

    bool lefttoright=false;
    
    while(!currentnode.empty()){
        node* temp=currentnode.top();
        currentnode.pop();

        if(temp){
            cout<<temp->data<<" ";

            if(lefttoright){
                if(temp->left){
                    nextnode.push(temp->left);

                }
                if(temp->right){
                    nextnode.push(temp->right);

                }
            }
            else{
                //leftright is not true
                if(temp->right){
                    nextnode.push(temp->right);
                }
                if(temp->left){
                    nextnode.push(temp->left);
                }
            }

            if(currentnode.empty()){
                lefttoright=!lefttoright;
                swap(currentnode,nextnode);
            }
        
    }
}
}

int main(){

node* root=new node(5);
root->left=new node(6);
 root->right=new node(7);
 root->left->left=new node(8);
 root->left->right=new node(9);
 root->right->left=new node(10);
 root->right->right=new node(11);
 root->left->left->left=new node(44);

     
zigzagtraversal(root);

    return 0;
}