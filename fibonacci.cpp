// 0,1,1,2,3,5,8,13....... this is fibonacci series
#include<iostream>
using namespace std;
void fibonacci(int num){
    int f1=0;
    int f2=1;
    int nextnum;
    for(int i=0;i<=num;i++){
     cout<<f1<<",";
     nextnum=f1+f2;
     f1=f2;
     f2=nextnum;
    }
}
int main(){
int n;
cin>>n;
fibonacci(n);





    return 0;
}