//dequeue are doubly linked queues which allows us to pop ans push data from front and back.
// problem on dequeue-> sliding window maximum.
//in this proble we have to print maximum element in given array of each window of k
//example-> given arr[6]={1,3,5,4,6,7}==> output {5,5,6,6};

//methode one having n*k timecomplexity.
/* #include<bits/stdc++.h>
using namespace std;


int main(){
    
int k=3;
int arr[]={1,3,5,4,6,7};
int n=sizeof(arr)/sizeof(arr[0]);     //this gives the size of an array.
for(int i=0;i<=n-k;i++){
    int max=arr[i];
    for(int j=1;j<k;j++){
        if(arr[i+j]>max){
            max =arr[i+j];
        }
        
    }cout<<max<<" ";
}
    return 0;
}*/

//methode 2) using dequeue.
#include<bits/stdc++.h>
using namespace std;
void slidingwinsow(int arr[],int n,int k){
    deque<int>qi(k);
//store only useful element in an deque.
for(int i=0;i<k;++i){
    if(arr[i]>arr[qi.back()]){
        qi.pop_back();
    }
    qi.push_back(i);
}

//to cheack the rest of elements in an array.
for(int i=k;i<n;++i){
    cout<<qi.front()<<",";
}






}




int main(){


    return 0;
}

