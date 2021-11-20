//in count count sort first make an count array which stores count of each element i.e number of occurance
//of that element.
//then modify count array and add sum of all previous elemnts until idex in each element.
//make an output array which is empty.
//traverse the main arry from last element and in output array place that elemnts in the index less than one (first do --1 then place)
//assign output array elemnts to original array elemnts.
#include<iostream>
using namespace std;
void countsort(int arr[],int n){
    int k=arr[0];
    for(int i=0;i<n;i++){
        k=max(k,arr[i]);
    }
    int count[k]={0};
    for(int i=0;i<k;i++){
        count[arr[i]]++;    //to cont the number of times of element.
    }

    for(int i=1;i<=k;i++){ 
        count[i]=count[i]+count[i-1];   //we have modified count array.
    }

   int output[n];
   for(int i=n-1;i>=0;i--){                //traverse original array in reverse manner.
       output[--count[arr[i]]] =arr[i];   //in output array we have placeed the last element in correct position.
       
   }
   for(int i=0;i<n;i++){
       arr[i]=output[i];
   }
    
}
int main(){
  

  int arr[8]={3,4,2,6,5,3,8,8,};
  countsort(arr,8);
  for(int i=0;i<8;i++){
      cout<<arr[i]<<" ";

  }

    return 0;
}