//cheack if the number is power of 2 or not
#include<iostream>
using namespace std;
bool ispowerof2(int n){
    if( n & (n-1)){
    return true;
    }
   else{
       return false;
   }
}

int main(){
    int n;
    cin>>n;
if(ispowerof2(n)){
    cout<<"it is power of 2"<<endl;
}
cout<<"is not";
    return 0;
}