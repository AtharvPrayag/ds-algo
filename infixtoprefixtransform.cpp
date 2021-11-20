//we have to make infix expression to prefix .
//we have to change opening and closing bracket with each other .
#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;
int precedence(char c){
    if(c=='^'){
        return 3;
    }
    else if(c=='/' || c=='*' ){
        return 2;
    }

    else if (c=='+' || c=='-'){
        return 1;
    }
    else{
        return -1;
    } 
}



string infixtoprefix(string s){
 reverse(s.begin(),s.end());
 string ans;
 stack<char>st;
 for(int i=0;i<s.length();i++){
     if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
          ans=ans+s[i];
     }


     else if(s[i]==')'){
         st.push(s[i]);
     }


     else if(s[i]=='('){
         while(!st.empty()  && st.top()!=')'){
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

reverse(ans.begin(),ans.end());
return ans;

}


int main(){

cout<<infixtoprefix("(a-b/c)*(a/k-l)");

    return 0;
}

