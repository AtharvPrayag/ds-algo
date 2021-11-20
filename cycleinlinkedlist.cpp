//we have to insert cycle detect cycle and remove cycle in given linked list.
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

//we have made fuction to make cycle in given linked list.

void makecycle(node*&head,int pos){
    node*temp=head;
    node*startcycle;
    int count=1;
    while(temp->next!=NULL  ){
        if(count==pos){
           startcycle=temp;
        }
      temp=temp->next;
      count++;
    }
    temp->next=startcycle;
}

//detect cycle in linked list.(floyd's algorithm).
//we have to make two pointer one itrated by one postion and second itrated by two positions.
bool detectcycle(node*&head){
    node* fast=head;
    node*slow=head;
    while(fast->next!=NULL || fast!=NULL){          
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow){
            return true;
        }
    }return false;
}

//remove cycle in given linked list.
//not showing any output.

void removecycle(node* &head){

node*fast=head;
node*slow=head;
do{
     slow=slow->next;
    fast=fast->next->next;
   

}while(slow==fast);

fast=head;
while(fast->next!=slow->next){
    slow=slow->next;
    fast=fast->next;
    
}
slow->next=NULL;
}





int main(){
node*head=NULL;
insertattail(head,1);
insertattail(head,3);
insertattail(head,5);
insertattail(head,7);
insertattail(head,11);
insertattail(head,13);
display(head);
//makecycle(head,4);

cout<<detectcycle(head)<<endl;
//removecycle(head);
cout<<detectcycle(head)<<endl;
//display(head);

return 0;
}
