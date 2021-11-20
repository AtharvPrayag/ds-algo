//we have to find the intersection point of linked list.
//showing wrong output.
#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;

    node(int val){
        data=val;
        next=NULL;

    }
};

//function to intersect two linked lists.

void intersecttwolists(node*head1,node*head2,int pos){
    pos--;
    node*temp1=head1;
    while(pos--){
     temp1=temp1->next;
    }

    node*temp2=head2;
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }
    temp2->next=temp1;
    
}



void insertattail(node*&head,int val){
    node*n=new node(val);
    if(head==NULL){
       head=n;
       return;
    }
     node*temp=head;
    while(temp->next!=NULL){
       temp= temp->next;
    }
    temp->next=n;
}



void display(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }cout<<"NULL"<<endl;
}

//finding the intersection point of two linked list.
int length(node* head){
    int l=0;
    node*temp=head;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    return l;
}
int intersection(node* &head1,node* &head2)
{
    int l1=length(head1);
    int l2=length(head2);
    int d=0;
    node* temp1;
    node* temp2;     //to treaverse the lists and temp1 is head of largest linked list,
     if(l1>l2){
         temp1=head1;
         d=l1-l2;
         temp2=head2;
     }
     else{
         temp1=head2;
         d=l2-l1;
         temp2=head1;
     }

     while(d){
         temp1=temp1->next;
         d--;
         if(temp1==NULL){
             return -1;
         }
     }

    while(temp1!=NULL && temp2!=NULL){
        if(temp1=temp2){
            return temp1->data;
        }
        temp1=temp1->next;
        temp2=temp2->next;

    }
    return -1;











}
int main(){

node*head1=NULL;
node*head2=NULL;
insertattail(head1,1);
insertattail(head1,2);
insertattail(head1,3);
insertattail(head1,4);
insertattail(head2,5);
insertattail(head2,6);
insertattail(head2,7);
intersecttwolists(head1,head2,3);
display(head1);
display(head2);
//cout<<intersection(head1,head2);
cout<<length(head1);
cout<<length(head2);


    return 0;
}