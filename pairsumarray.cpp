//we have to find the two numbers whose sum equal to given k;//we have to cheack there exist as such two element or not
//we have to make bool function for this
#include<iostream>
#include<climits>
using namespace std;
int main(){
int n,k;
cin>>n>>k;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
    }

int start=0;
int end=n-1;
while(start<end){


if(arr[start]+arr[end]==k){
    cout<<arr[start]<<","<<arr[end];
    break;
}
else if(arr[start]+arr[end]<k){
    start++;
}

else{
    end--;
}
}
    return 0;
}