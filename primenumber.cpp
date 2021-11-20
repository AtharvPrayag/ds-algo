//print all numbers between range a and b
#include<iostream>
using namespace std;

int main(){
int a, b,i,j;
cin>>a>>b;
for(int i=a;i<b;i++){
    for(int j=2;j<i;j++){
        if(i%j==0){
            break;
        } else if(j==i-1){
        cout<<i<<",";
    }
    }
    
}
    return 0;
}