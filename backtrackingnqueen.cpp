//we have to find were the  n queen can be placed in n*n chess board such that no queen can attack each other.
#include<bits/stdc++.h>
using namespace std;
bool issafe(int**arr,int x,int y,int n){
    for(int rows=0;rows<x;rows++){
        if(arr[rows][y]==1){                //to cheack the queens present in each column of row.
            return false;
        }
    }

int rows=x;
int column=y;
while( x>=0 && y>=0 ){
    if(arr[rows][column]==1){
        return false;                     //to cheak the queen present diagonal befor(left negative diagonal)
    }
rows--;
column--;
}
rows=x;
column=y;
while(x>=0 && y<n){
    if(arr[rows][column]==1){                      //to cheack for right upper diagonal.
        return false;
    }rows--;
    column++;
}
return true;

}

bool nqueen (int**arr,int x,int n){  //we dont need to cheack for column because we have cheacked it for 
  if(x>=n){                          //each element in row.
         
         return true;
  }                 
  for(int column=0;column<x;column++){                //to cheack for each column  in each row is queen present or not.
      if(issafe(arr,x,column,n)){
          arr[x][column]=1;
      
      if(nqueen(arr,x+1,n)){
          return true;
      }
      arr[x][column]=0;           //backtracking.
  }             
}
return false;
}

int main(){
int n;
cin>>n;
int**arr=new int*[n];
for(int i=0;i<n;i++){
    arr[i]=new int[n];
}

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        arr[i][j]=0;
    }
}

if(nqueen(arr,0,n)){
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<arr[i][j]<<" ";
    }cout<<endl;
}
}



    return 0;
}

//programm not giving an output