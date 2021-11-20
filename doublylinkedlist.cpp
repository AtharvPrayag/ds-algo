//doubly linked list have three fields in one as previous pointer
//data field and next pointer.
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* previous;
    node(int val){
        data=val;
        next=NULL;
        previous=NULL;
    }
};

void insertathead(node*&head,int val){
    node*n=new node(val);
    n->next=head;
    if(head!=NULL){
    head->previous=n;               // important.
    }
    head=n;
}





void insertattail(node*&head ,int val){
    if(head==NULL){
        insertathead(head,val);  
        return;         //corner case.
    }
    node*n=new node(val);
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->previous=temp;
}
/*delete kth node in doubly linkedlist.
unlike normal linked list we can directly delete kth node and
changes its links with previous node and next node in doubly linked list using previous and nex
data member.*/

//delete 3rd node in given linked list.
//giving error at delete at head position i.e pos ==1;
void deleteathead(node* &head){
    node* todelete=head;
    head=head->next;
    head->previous=NULL;
    delete todelete;
}
void deletion(node*&head,int pos){
    if(pos==1){
        deleteathead(head);
        return;
    }
    node*temp=head;
    int count=1;
    while(temp->next!=NULL && count!=pos){
        temp=temp->next;
        count++;
    }
    
    
    temp->previous->next=temp->next;
    if(temp->next!=NULL){          //in these two steps we have changed the links of temp
    temp->next->previous=temp->previous; }       //using temp's previous and next field.

     delete temp;
}











void display(node* head){

while(head!=NULL){
    cout<<head->data<<"->";
     head=head->next;
}cout<<"NULL"<<endl;
}

int main(){
node* head=NULL;
insertattail(head,1);
insertattail(head,2);
insertattail(head,3);
insertattail(head,4);
//display(head);
insertathead(head,5);
display(head);
//deletion(head,3);
//display(head);
deletion(head,1);
//deletion(head,5);
display(head);
    return 0;  
}