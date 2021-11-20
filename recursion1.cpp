/*
//sum till n using recursion
#include<iostream>
using namespace std;
int sum(int n){

    if(n==0){
        return 0;       //base condition to end recursion.
    }
int previoussum=sum(n-1);
return (n+previoussum);
}
int main(){
int n;
cin>>n;
cout<<sum(n);
    return 0;
}
*/



/*
//calculate n power p using recursion
#include<iostream>
using namespace std;
int powerof(int n,int p){

if(p==0){
    return 1;    //base condition to end recursion
}

int previouspwer=powerof(n,(p-1));
return n*previouspwer;


}
int main(){
int n;
int p;
cin>>n>>p;

cout<<powerof(n,p);

    return 0;
}
*/



/*
//factorial findings using recursion
#include<iostream>
using namespace std;
int factorial(int n){
    // n!=n*(n-1)! and 0! is 1.
if(n==0){
    return 1;
}
return n*factorial(n-1);

}
int main(){
int n;
cin>>n;
cout<<factorial(n);

    return 0;
}
*/



//nth element of fibonacci series.
#include<iostream>
using namespace std;
int fib(int n){
    //fib(n)=fib(n-1)+fib(n-2).
    //fib(0)=0 and fib(1)=1
    if(n==0 || n==1){
        return n;
    }
      return fib(n-1)+fib(n-2);
}


int main(){

int n;
cin>>n;
cout<<fib(n);



    return 0;
}