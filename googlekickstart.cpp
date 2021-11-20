//we have to print length of maximum arithematic subarray
#include<iostream>
using namespace std;
int main(){

int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}cout<<"length of longest arithamatic subarray is"<<endl;


int pcd=arr[1]-arr[0];
int curr=2;    //it gives current lenght of arithmatic subarray
int ans=2;     //it gives lenght of maximum arithamatic subarray
for(int i=2;i<n;i++){

if(pcd==arr[i]-arr[i-1]){
    curr=curr+1;
}else{
    pcd=arr[i]-arr[i-1];
    curr=2;
}
ans=max(ans,curr);
}
cout<<ans<<endl;


    return 0;
}