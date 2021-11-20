//we have to find circular subarray maximum sum of given array
#include<iostream>
#include<climits>
int kedens(int arr[],int n){
    int currentsum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        currentsum=currentsum+arr[i];
        if(currentsum<0){
            currentsum=0;
        }
      maxsum=max(maxsum,currentsum);
    }
    return maxsum;
}
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int wrapping=kedens(arr,n);
int totalsum=0;
for(int i=0;i<n;i++){
    totalsum=totalsum+arr[i];
    arr[i]=-arr[i];
}

int nonwrapping=totalsum+kedens(arr,n);

cout<<max(wrapping,nonwrapping);




    return 0;
}