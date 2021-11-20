
//we have to find if two given trees are identicle or not.
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

bool isidenticle(node* root1,node* root2){
    if( root1==NULL && root2==NULL){
          
          return true;
    }
    else if(root1==NULL || root2==NULL){
        return false;
    }

   else{
       bool cond1=root1->data=root2->data;
       bool cond2=isidenticle(root1->left,root2->left);
       bool cond3=isidenticle(root1->right,root2->right);

    if(cond1 && cond2 && cond3){
       return true;
   }
   }
   return false;
   
}

int main(){

node* root1=new node(1);
root1->left=new node(2);
root1->right=new node(3);
root1->right->right=new node(4);


node* root2=new node(6);
root2->left=new node(2);
root2->right=new node(3);
root2->right->right=new node(5);


// if(isidenticle(root1,root2)){
//     cout<<" given bst is identicle "<<endl;
// }
// else{
//     cout<<" given bst is not identicle "<<endl;
// }
cout<<isidenticle(root1,root2);



    return 0;
}
