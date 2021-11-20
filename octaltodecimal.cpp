#include<iostream>
using namespace std;
int conversion(int n){
int x=1;
int ans=0;
while(n>0){

int y=n%10;
ans=ans+x*y;
x=x*8;
n=n/10;
}
return ans;
}



int main(){
int num;
cin>>num;
cout<<conversion(num);
    return 0;
}