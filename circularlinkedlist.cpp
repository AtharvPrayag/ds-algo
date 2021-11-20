//circular linked list.
#include<iostream>
using namespace std;
class node
{
    public:
int data;
node* next;
node(int val){
    data=val;
    next=NULL;
}

};
void insertathead(node&head,int val){
    node*n=new node(val)
    if(head==NULL){
        n->next=n;
        head=n;
    }
    node*temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp-next=n;
    n->next=head;
    head=n;
}
}


void insertattail(node*&head,int val){
    node* n=new node(val);

     if(head==NULL){
         insertathead(head);
     }

     node*head=temp;
     do{
        temp=temp->next
     }while(temp->next!=head);


     temp->next=n;
     n->next=head;

}



void display(node* head){
    node* temp=head;
    do{
        cout<<temp->data<<"->";

    }while(temp!=head);
    cout<<"NULL"<<endl;
}
























int main(){


node*head=NULL;
insertattail(head,1);
insertattail(head,3);
insertattail(head,5);
insertattail(head,7);
display(head);



    return 0;
}