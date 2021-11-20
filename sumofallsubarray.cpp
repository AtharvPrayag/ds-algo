//we have to print sum of all subarray in given array
#include<iostream>
using namespace std;
int main(){
int n;
int sum=0;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
} 
cout<<"sum of all elments in all subarray is=\n";

for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
      sum=sum+arr[j];
      cout<<sum<<endl;
    }
}





    return 0;
}