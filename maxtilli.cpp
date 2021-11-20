// in given array we have to print maximum till each element
#include<iostream>
#include<climits>
using namespace std;
int main(){

int n;
int mx=-19999;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}cout<<"the max till i is=";
for(int i=0;i<n;i++){
mx=max(mx,arr[i]);
cout<<mx<<endl;
}






    return 0;
}