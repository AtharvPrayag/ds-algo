#include<iostream>
using namespace std;
int main(){
//taking 2d array input
int n,m;
cin>>n>>m;
int arr[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
}
//printing 2d array
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<arr[i][j]<<" ";
    }cout<<endl;
}

//searching element in 2d array
int k=10;
cin>>k;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(arr[i][j]==k){
            cout<<i<<","<<j;
        }
    }
}
    return 0;
}





