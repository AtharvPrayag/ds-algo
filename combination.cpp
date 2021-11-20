// programm to find nCr
// nCr=n!/(n-r)!+r!
#include<iostream>
using namespace std;
int factorial(int num){
int number=1;
for(int i=1;i<=num;i++){
    number=number*i;
}
return number;




}

int main(){
    int n,r;
    cin>>n>>r;
    int ans=factorial(n)/(factorial(n-r)*factorial(r));

cout<<ans;


    return 0;
}