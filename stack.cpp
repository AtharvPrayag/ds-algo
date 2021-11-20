/*stack is linear data type and element can only be added at top or removed from top only.
we use class to impliment stack.. array used instack must be dynamically allocted to use function like
push,pop top,empty in stack*/



/*#include<iostream>
using namespace std;
#define n 100
class stack{
    int* arr;
    int top;
    public:
    stack(){
        arr=new int[n];            //constructor of class stack.
        top=-1;                     //top is initially points at arrays -1 position.
    }
//functions of stack.
void push(int x){
    if(top==n-1){
        cout<<"stack overflow"<<endl;
        return;
    }
    top++;
    arr[top]=x;
}
void pop(){
    if(top==-1){
        cout<<"no elemnt to pop;"<<endl;
        return ;
    }
    top--;
}
int Top(){
    if(top==-1){
        cout<<"no elemnt found"<<endl;
        return -1;
    }
    return arr[top];
}

bool empty(){
    if(top==-1){
        return true;
    }
    else{
        return false;
    }
}
};



int main(){
    

    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    cout<<st.Top()<<endl;;
    cout<<st.empty();
    
    
    
    
    return 0;}*/




/*
//reverse the sentance using stack.
#include<iostream>
#include<stack>
#include<string>
using namespace std;

void reversestring(string s){
stack<string>st;
for(int i=0;i<s.length();i++){
    string word="";
    while( s[i]!=' ' && i<s.length() ){
        word+=s[i];
        i++;
    }
    st.push(word);
    
}
while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
}cout<<endl;
}

int main(){

string s="hey, how you doing?";
cout<<s<<endl;
reversestring(s);



    return 0;
}
*/

//reverse the stack.
//not showning output here ????? 
#include<iostream>
#include<stack>
using namespace std;

void insertatbottom(stack<int>&st,int ele){
    if(st.empty()){
        st.push(ele);    
        return ;        //base condition.
    }
    int topele=st.top();
    st.pop();
    insertatbottom(st,ele);
    st.push(topele);
}




void reversestack(stack<int>&st){
    if(st.empty()){
        return ;                     //base condition.
    }

int ele=st.top();
st.pop();
reversestack(st);

insertatbottom(st,ele);
}

int main(){

stack<int>st;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);
while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
}cout<<endl;

reversestack(st);

while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
}cout<<endl;


    return 0;
}

