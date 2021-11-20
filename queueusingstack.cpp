//we have to impliment queue using stack.


/* //methode 1) making pop function coastly.
#include<bits/stdc++.h>
using namespace std;
class que{
    stack<int>st1;
    stack<int>st2;

public:

void push(int x){
    st1.push(x);
}
int pop(){
    if(st1.empty() && st2.empty()){
        cout<<"no element to pop"<<endl;
        return -1;
    }

    if(st2.empty()){
        while(!st1.empty()){
        st2.push(st1.top());
        st1.pop();
        }
    }
    int res=st2.top();
    st2.pop();
    return res;
}
bool empty(){
    if(st1.empty() && st2.empty()){

    return true;
    }
    return false;
}
};
int main(){

que q;
q.push(1);
q.push(2);
q.push(3);
q.push(4);
q.push(5);

cout<<q.pop()<<endl;
cout<<q.pop()<<endl;
cout<<q.pop()<<endl;
cout<<q.pop()<<endl;
cout<<q.pop()<<endl;
cout<<q.pop()<<endl;

    return 0;
}

*/


//methode 2) recursive methode to implement queue using stack.
#include<bits/stdc++.h>
using namespace std;
class que{
    stack<int>s1;
    public:
    void push(int x){
        s1.push(x);
    }

    int pop(){
        if(s1.empty()){
            return -1;
        }

      //base condition.

      int x=s1.top();
      s1.pop();
      if(s1.empty()){
          return x;
      }

      int topval=pop();
      s1.push(x);
      return topval;
    }



bool empty(){
    if(s1.empty()){
        return true;

    }return false;
}
};
int main(){
que q;
q.push(1);
q.push(2);
q.push(3);
q.push(4);
q.push(5);

cout<<q.pop()<<endl;
cout<<q.pop()<<endl;
cout<<q.pop()<<endl;
cout<<q.pop()<<endl;
cout<<q.pop()<<endl;
cout<<q.pop()<<endl;
cout<<q.pop()<<endl;


    return 0;
}