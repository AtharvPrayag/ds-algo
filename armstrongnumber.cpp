// armstrong number is number whose addiition of cube of each  digit gives  number itself
// example= 153 =(1)^3+(5)^3+(3)^3=1+125+27
//write a programm to identify the number is armstrong or not
#include<iostream>
using namespace std;
int cube(int n){

    return (n*n*n);
     
}int main(){
int lastdigit;
int sum=0;
int n;

cin>>n;
int originaln=n;
while(n>0){

lastdigit=n%10;

sum=sum+cube(lastdigit);
n=n/10;

}if(sum==originaln){
    cout<<"it is armstrong number";

}else{
    cout<<"it is not armstrong number";
}



    return 0;
}
