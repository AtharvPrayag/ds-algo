#include<iostream>
using namespace std;
int main(){
int i,j;
int n;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(i+j%(n+1)){
            cout<<"*";
        }
        else{cout<<" ";
        }
    }
}
for(int j=1;j<=n;j++){
        if(i+j%(n+1)){
            cout<<"*";
        }
        else{cout<<" ";
        }
    }cout<<endl;

for(int i=n;i>=1;i--){
    for(int j=1;j<=n;j++){
        if((i+j)%(n+1)){
            cout<<"*";
        }
        else{cout<<" ";
        }
    }
}
for(int j=1;j<=n;j++){
        if((i+j)%(n+1)){
            cout<<"*";
        }
        else{cout<<" ";}
    }cout<<endl;



    return 0;
}