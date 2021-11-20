#include<iostream>
using namespace std;class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;

    }
};

void insertattail(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"-> ";
        temp=temp->next;
    }cout<<"null"<<endl;
}


void oddeven(node* &head){

node*odd=head;
node*even=head->next;
node*evenstart=even;
while(even->next!=NULL && odd->next!=NULL){
    odd->next=odd->next->next;
    odd=odd->next;
    even->next=even->next->next;
    even=even->next;
}
odd->next=evenstart;







}















int main(){
node*head=NULL;
insertattail(head,1);
insertattail(head,2);
insertattail(head,3);
insertattail(head,4);
insertattail(head,5);
insertattail(head,6);  
insertattail(head,7);

display(head);
oddeven(head);
display(head);



    return 0;
}