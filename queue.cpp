/*queue are  linear data type  which is similar to the stack.
in queue there are different fuctions.main functions of queue data type are enqueue,dequeu
peek and empty.
- queue are implimented using array in class.*/
/*#include<iostream>
using namespace std;
#define n 20
class queue{
int* arr;
int front;
int back;
public:

queue(){
    arr=new int [n];
    front =-1;                         //constructor.
    back=-1;
}

void enqueue(int x){
    
    if(back==(n-1)){
        cout<<"queuq overflow";
        return ;
    }
    back++;
    arr[back]=x;
    
    if(front==-1){
        front++;
    }
}


void dequeue(){
    if(front==-1  || front>back){
        cout<<"no element to dequeuq";
        return ;
    }
    front++;
}


int peek(){
    if(front==-1 || front>back){
        cout<<"no element found";
        return -1;
    }
    return arr[front];
}


bool empty(){
    if(front==-1 || front>back){
        return true;
    }
   return false;
}




};








int main(){

queue q;
q.enqueue(1);
q.enqueue(2);
q.enqueue(3);
q.enqueue(4);
q.enqueue(5);
cout<<q.empty()<<endl;
while(!q.empty()){
    cout<<q.peek();
    q.dequeue();
}cout<<endl;


cout<<q.empty();

    return 0;
}
*/

//linked list implimantation of an queue.
#include<iostream>
#include<stacK>
using namespace std;
class node{
public:
int data;
node*next;


node(int val){
    data=val;            //constructor.
    next=NULL;
}
};

class queue{
    public:
    node*front;
    node*back;


    queue(){
        front=NULL;
        back=NULL;
    }
void push(int x){
node*n=new node(x);
if(front==NULL){
    front=n;
    back=n;
    return;
}
back->next=n;
back=n;
}


void pop(){
    if(front==NULL){
        cout<<"no element to pop"<<endl;
        return ;
    }
node* todelete;
todelete=front;

    front = front->next;
    delete todelete;
}


int peek(){
    if(front==NULL){
        cout<<"no element in queue"<<endl;
        return -1;
    }
    return front->data;
}

bool empty(){
    if(front==NULL){
        return true;
    }
    return false;

}


};





int main(){
queue q;

for(int i=0;i<5;i++){
q.push(i);
}
while(!q.empty()){
    cout<<q.peek();
    q.pop();
}


    return 0;
}
