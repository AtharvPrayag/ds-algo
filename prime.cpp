#include<iostream>
using namespace std;
//number is prime or not
int main(){
int a,i;
cin>>a;
if(a==0 ||a==1){
    cout<<"number is not even nor prime";
}
for(int i=2;i<a;i++){
    if(a%i==0){
        cout<<"the number is non prime";
        break;
    }else if(i==a-1){

    cout<<"thr numbr is prime";
}

}



    return 0;
}