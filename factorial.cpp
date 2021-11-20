//factorial using itrative methode
#include<iostream>
using namespace std;
int main(){

int n;
int factorial=1;
cin>>n;

for(int i=2;i<=n;i++){
factorial=factorial*i;
}

cout<<factorial;

    return 0;
}