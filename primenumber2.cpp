//print all prime numbers in range a to b using function
#include<iostream>
using namespace std;
bool primenumber(int n){

for(int i=2;i<n;i++){
    if(n%i==0){
        return false;
    }
}
return true;
}
int main(){
int a,b;
cin>>a>>b;
for(int i=a;i<=b;i++){
    if(primenumber(i)== true){
        cout<<i<<endl;
    }
}




    return 0;
}