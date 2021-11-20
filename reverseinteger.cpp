#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
//1234
int reverse=0;
int lastdigit;

while(n>0){

lastdigit=n%10;              //4 //3//2//1
reverse=reverse*10+lastdigit;//4//43//432//4321
n=n/10;


}


cout<<reverse;


    return 0;
}
