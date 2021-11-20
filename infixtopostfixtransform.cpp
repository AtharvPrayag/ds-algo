//we have to convert infix expression into postfix.
#include<iostream>
#include<string>
#include<stack>
using namespace std;

int precedence(char s){
    if(s=='^'){
          return 3;
    }
    else if(s=='/' || s=='*' ){
        return 2;
    }
    else if(s=='+' || s=='-'){
        return 1;
    }
   else{ return -1;}
}

string infixtopostfix(string s){
    stack<char>st;
    string ans;
    for(int i=0; i<s.length(); i++){

        if((s[i]>='a' && s[i]<='z'  ) || (s[i]>='A' && s[i]<='Z')){
            ans=ans+s[i];
        }

        else if(s[i]=='('){
            st.push(s[i]);
        }
        
        else if(s[i]==')'){
            while(!st.empty() && st.top()!='('){
                ans=ans+st.top();
                st.pop();
            }
            if(!st.empty()){
                st.pop();
            }
        }


        else{
            while(!st.empty()  && precedence(st.top())>=precedence(s[i])){
                ans=ans+st.top();
                st.pop();
            }
            st.push(s[i]);
        }

    }
    while(!st.empty()){
        ans=ans+st.top();
        st.pop();
    }
    return ans;
}








int main(){


cout<<infixtopostfix("(a-b/c)*(a/k-l)");


    return 0;
}