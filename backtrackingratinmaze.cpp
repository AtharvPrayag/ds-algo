//backtracking is a process when we cant get required ans by doing some further operations then we backtrack to original position
//and then cheack ans in other way

//Q.1) rat in a maze problem.
//input=                     output
//1 0 1 0 1               1 0 0 0 0
//1 1 1 1 1               0 1 1 1 0
//0 1 0 1 0               0 0 0 1 0
//1 0 0 1 1               0 0 0 1 1
//1 1 1 0 1               0 0 0 0 1


#include<iostream>
using namespace std;
bool issafe(int**arr,int n,int i,int j){
    return (arr[i][j]==1 && i<n && j<n);
}
bool ratinmaze(int** arr,int n,int i,int j,int**solArr){
if(i==(n-1) && j==(n-1)){
    solArr[i][j]=1;
    return true;  
}
while(i<=(n-1) && j<=(n-1)){
if(issafe(arr,n,i,j)){

solArr[i][j]=1;
if(ratinmaze(arr,n,i+1,j,solArr)){
    return true;
}
if(ratinmaze(arr,n,i,j+1,solArr)){
    return true;
}
}
solArr[i][j]=0;

return false;
}
return false;
}


int main(){

int n;
cin>>n;
int**arr=new int*[n];
for(int i=0;i<n;i++){
    arr[i]=new int [n];
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
}

int** solArr=new int*[n];
for(int i=0;i<n;i++){
    solArr[i]=new int[n];
}

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        solArr[i][j]=0;
    }
}

ratinmaze(arr,n,0,0,solArr);
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<solArr[i][j]<<" ";
    }cout<<endl;

}

    return 0;
}