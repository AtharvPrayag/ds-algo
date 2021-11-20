//we have to delete any given node in linked list.
#include<iostream>
using namespace std;
class node{
public:
int data;
node* next;
// node(int val){
//     data=val;
//     next=NULL;
};

void display(node* head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }cout<<"NULL"<<endl;;
}


void insertattail(node* &head,int val){
    node*n=new node();
    n->data=val;
    n->next=NULL;

node*temp=head;
while(temp->next!=NULL){
    temp=temp->next;
}
temp->next=n;
}


void insertathead(node* &head,int val){
    node*n=new node();
    n->data=val;
    n->next=head;
    head=n;
}
//deletion
void deleteathead(node*&head){
    node* todelete=head;
    head=head->next;
    delete todelete;
     
}

void deletion(node* &head,int val){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deleteathead(head);
    }
    node*temp=head;
while(temp->next->data!=val){
    temp=temp->next;
}
//in temp now  we have n-1 th node;
node* todelete=temp->next;
temp->next=temp->next->next;
delete todelete;


}





// bool search(node* head,int key){
//     while(head!=NULL){
//         if(head->data==key){
//             return true;
//         }
//        head=head->next;

//     }return false;
// }


int main(){

node*first=new node();
node*second=new node();
node*third=new node();

//assingning the  values to them.
first->data=99;
first->next=second;
second->data=111;
second->next=third;
third->data=999;
third->next=NULL;
insertattail(first,1111);
insertathead(first,555);

//search(first,999);
deletion(first,111);
deletion(first,1111);
deletion(first,99);
deleteathead(first);
display(first);
    return 0;
}
