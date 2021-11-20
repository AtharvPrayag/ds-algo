//we want the transpose of given 2d array 
//transpose means we have to change the row with column and column with rows
#include<iostream>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
int arr[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
}
//for transpose
for(int i=0;i<n;i++){
    for(int j=i;j<m;j++){
        int temp=arr[i][j];
        arr[i][j]=arr[j][i];
        arr[j][i]=temp;
    }
}

cout<<"your transpose mayrix is=\n";
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<arr[i][j]<<" ";
    }cout<<endl;
}
    return 0;
}