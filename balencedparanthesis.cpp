//we have to tell either given parathesis string is balenced or not.
#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool cheack(string s){
    
    stack<char>st;
    for(int i=0;i<s.length();i++){
   
   if( s[i]=='(' || s[i]=='{'  || s[i]=='['){
       st.push(s[i]);
   }


  else  if(s[i]==')'){
       if(!st.empty() && st.top()=='('){
       st.pop();
       }
       else{
           return false;
       }
   }


else if( s[i]==']'){
    if(!st.empty() && st.top()=='['){
        st.pop();
    }
    else{
        return false;
        
    }
}


else if(!st.empty() && s[i]=='}'){
    if(st.top()=='{'){
        st.pop();
    }
    else{
        return false;
    }
    
}
    }


return true;
    }

int main(){
    
cout<<cheack("([{}])");
    return 0;
}