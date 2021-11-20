//we have to search given element in given matrix with time complexity n
#include<iostream>
using namespace std;
int main(){
int n,m,s;
cin>>n>>m>>s;
int arr[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
}
bool flag=false;
int c=m-1;
int r=0;
while(c>=0 && r<n){
if(arr[c][r]==s){
    flag= true;
}
else if(arr[c][r]<s){
    r++;
}
else{
    c--;
}
}
if(flag){
    cout<<"element found";
}
else{
    cout<<"element not found";
}



    return 0;
}