#include<iostream>
using namespace std;
int main(){
int n,i,j;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int s;
cin>>s;
int sum=0;
for(int i=0;i<n;i++){
    sum=0;
    for(int j=i;j<n;j++){
        sum=sum+arr[j];
          if(sum==s){
              cout<<i<<j;
              break;
          }
    }

}







    return 0;
}