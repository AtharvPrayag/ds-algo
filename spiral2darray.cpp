//we have to print elments of 2d array given by user in spiral manner
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
//we have to print above array in spiral manner;
int row_st=0;
int column_st=0;
int row_end=n-1;
int column_end=m-1;

while(row_st<=row_end && column_st<=column_end){
    for(int col=column_st; col<=column_end;col++){
        cout<<arr[row_st][col]<<" ";
     
    }   row_st++;

     for(int row=row_st;row<=row_end;row++){
           cout<<arr[row][column_end]<<" ";
             
     }column_end--;


     for(int col=column_end;col>=column_st;col--){
         cout<<arr[row_end][col]<<" ";
        
     } row_end--;
     
     for(int row=row_end;row>=row_st;row--){
         cout<<arr[column_st][row]<<" ";
         
     }column_st++;

}

    return 0;
}