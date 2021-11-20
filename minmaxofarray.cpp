//we have to find maximum and minmum value elment in array given by user
#include<iostream>
#include<climits>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int maxnum=INT_MIN;
int minnum=INT_MAX;
/*for(int i=0;i<n;i++){
    if(arr[i]>maxnum){
       maxnum=arr[i];
    }if(arr[i]<minnum){
        minnum=arr[i];
    }
}*/
for(int i=0;i<n;i++){

maxnum=max(maxnum,arr[i]);
minnum=min(minnum,arr[i]);
}
cout<<maxnum<<" "<<minnum;







    return 0;
}