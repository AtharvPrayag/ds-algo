#include<bits/stdc++.h>
using namespace std;
class Stack{
    queue<int>q1;
    queue<int>q2;

    int N;
    public:

    Stack(){
        N=0;
    }


void push(int val){
    N++;
    q2.push(val);
    while(!q1.empty()){
        q2.push(q1.front());
        q1.pop();
    }
    queue<int>temp;
    temp=q1;
    q1=q2;
    q2=temp;
}

void pop(){
    q1.pop();
    N--;
}

int top(){
    return q1.front();
}

int size(){
    return N;
}

};
int main(){
Stack st;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
cout<<st.top();

    return 0;
}