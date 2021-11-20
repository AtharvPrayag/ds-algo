//simple calculator using switch case
#include<iostream>
using namespace std;

int main(){
int a,b;
cout<<"input two numbers :"<<endl;
cin>>a>>b;
char op;
cout<<"enter the oprator"<<endl;
cin>>op;
switch(op){

case '+':
cout<<a+b;
break;
case '-':
cout<<a-b;
break;
case '*':
cout<<a*b;
break;
case '/':
cout<<a/b;
break;
deafult:
cout<<"processing";




}







    return 0;
}