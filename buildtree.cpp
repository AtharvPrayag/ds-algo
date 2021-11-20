//Q.1) we have to build a tree from preorder and inorder array.
/* #include<bits/stdc++.h>
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

int search(int inorder[],int st,int end,int curr){
    for(int i=st;i<=end;i++){
        if(inorder[i]==curr){
            return i;
        }
       
    } return -1;
}
node* buildtree(int preorder[],int inorder[],int st,int end){
    static int idx=0;
    if(st>end){
        return NULL;
    }
    int curr=preorder[idx];
    idx++;
    node* n=new node(curr);
    int pos=search(inorder,st,end,curr);
    if(st==end){
        return n;
    }
    n->left=buildtree(preorder,inorder,st,pos-1);
    n->right=buildtree(preorder,inorder,pos+1,end);
    return n;
}

void inorderprint(node*root){
    if(root==NULL){
        return ;
    }
    inorderprint(root->left);
    cout<<root->data<<" ";
    inorderprint(root->right);

}
int main(){
    int preorder[]={1,2,4,3,5};
    int inorder[]={4,2,1,5,3};

node* root=buildtree(preorder,inorder,0,4);

inorderprint(root);




    return 0;
}*/

//Q.2) build a tree from postorder and inorder.
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;

    public:
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

int search(int inorder[],int st,int end,int curr){
    for(int i=st;i<=end;i++){
        if(inorder[i]==curr){
            return i;
        }
    }
    return -1;
}

node* buildtree(int postorder[],int inorder[],int st,int end){
    static int idx=end;
    if(st>end){
        return NULL;
    }
    int curr= postorder[idx];
    idx--;
    node* n=new node(curr);
    int pos=search(inorder,st,end,curr);
    if(st==end){
        return n;
    }
    n->right=buildtree(postorder,inorder,pos+1,end);
    n->left=buildtree(postorder,inorder,st,pos-1);
    return n;

}

void inorderprint(node*root){
    if(root==NULL){
        return ;
    }
    inorderprint(root->left);
    cout<<root->data<<" ";
    inorderprint(root->right);
}




 
int main(){

int postorder[]={4,2,5,3,1};
int inorder[]={4,2,1,5,3};
node* root=buildtree(postorder,inorder,0,4);
inorderprint(root);


    return 0;
}





int main(){

node* root=new node(1);
root->left=new node(2);
root->right=new node(3);
root->left->left=new node(4);
root->left->right=new node(5);
root->right->left=new node(6);
root->right->right=new node(7);

//levelorder(root);

    return 0;
}