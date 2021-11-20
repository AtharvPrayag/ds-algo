//we have to reverse linked list.
//there are two ways to reverse linked list.
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

//reverse the linked list by itrative method.
node* reverse(node*head){
//make three pointers
node* previous=NULL;
node* current=head;
node* nextptr;
//when we are at newhead it will be pointed by previous pointer

while(current!=NULL){
    nextptr=current->next;           //itrating next point.
    current->next=previous;      //to chnge the linkes.
    previous=current;
    current=nextptr;
}

return previous;

}


//reversing the linked list by recursive method.
node* reverserecursive(node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* newhead1=reverserecursive(head->next);
    head->next->next=head;       //to change the linkes.
    head->next=NULL;
    return newhead1;
}



//reversing k node.
// is 1->2->3->4->5->6  and k=2
//output= 2->1->4->3->6->5

node* reversek(node* &head,int k){
    node* previous=NULL;
    node* current =head;
    node* nextptr;
    int count=0;

    // we have to itratively reverse k nodes.
    while(current!=NULL && count<k){
        nextptr=current->next;
        current->next=previous;
        previous=current;
        current=nextptr;
        count++;
    }
    node* temp=nextptr;

    if(temp!=NULL ){
        head->next=reversek(nextptr,k);
    }


    return previous;
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
node* newhead=reverse(head);
display(newhead);
int k=2; 
node* newhead2=reversek(head,k);
display(newhead2);

    return 0;
}