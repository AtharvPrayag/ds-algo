//we have to print first and last elment of subarray whose sum is equal to given S;
#include<iostream>
using namespace std;
int main(){
int n,s;
cin>>n>>s;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int i=0;
int j=0;
int sum=0;
int st=-1;
int end=-1;
while(j<n && sum+arr[j]<=s){
    sum=sum+arr[j];
    j++;
}
if(sum==s){
    cout<<i+1<<","<<j;
    return 0;
    }

while(j<n){
    sum=sum+arr[j];
    while(sum>s){
        sum=sum-arr[i];
        i++;
    }
   
    if(sum==s){
    st=i+1;
    end=j+1;
    break;
    
}j++;
}
cout<<st<<","<<end;

    return 0;
}