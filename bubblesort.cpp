// it another method of sorting an array
//in which we repetadly swap two adjecent memebers of an array
#include<iostream>
using namespace std;
int main(){

int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){

cin>>arr[i];

}

for (int j=1;j<n;j++){
for(int i=0;i<n-j;i++){
    if(arr[i]>arr[i+1]){
       
       int temp=arr[i];
       arr[i]=arr[i+1];
       arr[i+1]=temp;

    }
}}cout<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<",";
}

    return 0;
}