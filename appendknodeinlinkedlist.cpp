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
//appendk node function
//showing wrong output why....



int length(node*head){
    int l=0;
    while(head!=NULL){
        head=head->next;
        l++;
    }
    return l;
}




node* appendk(node* &head,int k){
    int l=length(head);
node* tail=head;
node*newhead;
node*newtail;
int count=1;
k=k%l;
while(tail->next!=NULL){
    if(count=l-k){
        newtail=tail;
    }
    if(count=l-k+1){
        newhead=tail;
    }
    tail=tail->next;
    count++;
}
//now we have to change linkes
newtail->next=NULL;
tail->next=head;



return newhead;

}














int main(){
    node* head=NULL;
    // insertattail(head,1);
    // insertattail(head,2);
    // insertattail(head,3);
    // insertattail(head,4);
    int arr[6]={1,2,3,4,5,6};
    for(int i=0;i<6;i++){
        insertattail(head,arr[i]);
    }
    display(head);
   node* newhead= appendk(head,3);
   display(newhead);
}