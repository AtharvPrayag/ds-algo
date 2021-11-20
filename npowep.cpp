#include<iostream>
using namespace std;
int main(){

/*int n;
int p;
cin>>n>>p;
int ans=1;
for(int i=0;i<p;i++){
ans=ans*n;
}

cout<<ans;



    return 0;
} */
int n;
cin>>n;
int n1=1;
int n2=1;
cout<<n1<<",";
int temp;
for(int i=0;i<n-1;i++){

    temp=n2;
    n2=n1+n2;
    n1=temp;
      cout<<n2<<", ";
}





return 0;}
