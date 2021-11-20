//using function without recursion
#include<iostream>
using namespace std;
int factorial(int n){int num=n;
    for(int i=1;i<n;i++){

num=num*i;

    }
return num;
}
int main(){

int n;
cin>>n;
factorial(n);




    return 0;
}