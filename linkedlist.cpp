//linked list are linear dat type 
//linked lists are consists of links of nodes
//each nade contain two part 1)data region which stores data
//2) next region which stores the adress ofnext node.

//programm to decleare linked list having three nodes.
#include<iostream>
using namespace std;
class node{
public:
int data;
node* next;
node(int val){
    data=val;
    next=NULL;
}
node(){
    data=data
    next=next;
}

};


void insertattail(node* &head,int val){
node* n=new node(val);
node* temp=head;
if(head==NULL){
head=n;
}
while(temp->next==NULL){
    temp=temp->next;
}
temp->next=n;


 }
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){

//declearing  3 nodes
 node* head =NULL;
node* second=NULL;
node*third=NULL;


//making three nodes.
head=new node();           
second=new node();          
third=new node();
 
 //giving data and linking these nodes.
 head->data=4;
 head->next=second;
 second->data=59;
 second->next=third;
 third->data=69;
 third->next=NULL;
 node* first=head;
insertattail(first,88);
insertattail(first,77);
insertattail(first,888);
 display(head);
    return 0;
}