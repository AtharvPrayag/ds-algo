//we have to merge two sorted linked list.
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

//merging two sorted linked lists.

node* mergeitratively(node*&head1,node* &head2){
    node* p1=head1;
    node* p2=head2;
    node* dummynode=new node(-1);
    node*p3=dummynode;
    while(p1!=NULL && p2!=NULL){
        if(p1->data<p2->data){
            p3->next=p1;
            p1=p1->next;
        }
        else{
            p3->next=p2;
            p2=p2->next;
        }
        p3=p3->next;
    }


    while(p1!=NULL){
        p3->next=p1;
        p1=p1->next;
        p3=p3->next;
    }

   while(p2!=NULL){
       p3->next=p2;
       p2=p2->next;
       p3=p3->next;
   }

   return dummynode->next;
    }



//we can merge two linked list recursively also
node* mergerecursively(node* &head1,node* &head2){
if(head1==NULL){
    return head2;
}                                      //base case.
if(head2==NULL){
    return head1;
}
node* result;

if(head1->data < head2->data){
    result=head1;
    result->next=mergerecursively(head1->next,head2);
    

}
else{
    result=head2;
    result->next=mergerecursively(head1,head2->next);
 
}

return result;

}






























int main(){

node*head1=NULL;
node* head2=NULL;

insertattail(head1,1);
insertattail(head1,3);
insertattail(head1,5);
insertattail(head1,7);
insertattail(head1,9);
insertattail(head2,2);
insertattail(head2,4);
insertattail(head2,6);
insertattail(head2,8);
insertattail(head2,10);
display(head1);
display(head2);

node* newhead=mergerecursively(head1,head2);
display(newhead);


}