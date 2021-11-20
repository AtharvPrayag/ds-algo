//- + 7 * 4 5 + 2 0 we have to evaluate this prefix expression(string) using stack.
#include<iostream>
#include<string>
#include<stack>0
#include<math.h>
using namespace std;

int prefixevaluation(string s){
stack<int>st;
for(int i=s.length()-1;i>=0;i--){
    
    if(s[i]>='0' && s[i]<='9' ){
    st.push(s[i]-'0');
    }
    else{
        int operand1 =st.top();
        st.pop();
        int operand2=st.top();
        st.pop();
        switch(s[i]){
            case '+':
           st.push(operand1+operand2);
           break;
           case '-':
           st.push(operand1-operand2);
           break;
           case '*':
           st.push(operand1*operand2);
           break;
           case '/':
           st.push(operand1 / operand2);
           break;
           default :
           break;
        }
    }
}

return st.top();


}








int main(){

string s="-+7*45+20";
cout<<prefixevaluation(s);


    return 0;
}
