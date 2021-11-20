//quicksort uses a devide and concur algorithm.
//take any pivot number and place it in its correct position i.e= elements before are less than pivot and element after are greater than pivot
//and then recursively call it for pi-l and pi+1(for elemnts before pivot and elemets after pivot).
#include<iostream>
using namespace std;
void swap(int arr[],int l,int r){
    int temp=arr[l];
    arr[l]=arr[r];
    arr[r]=temp;
}
int partition(int arr[],int l,int r){
    int pivot=arr[r];          //we have taken last elemnt as pivot.
    int i=l-1;
    for(int j=l;j<r;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,r);         //correct position of r shold be i+1;
return i+1;
}
void quicksort(int arr[],int l,int r){
    if(l<r){

       int pi=partition(arr,l,r);           //in this fuction choose any piviot pointer ansd using this func, place pivot in its correct 
                                            //position.
         quicksort(arr,l,pi-l);
            quicksort(arr,pi+1,r);
    }
}
int main(){

int arr[5]={3,44,55,2,1};
quicksort(arr,0,4);
for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}


    return 0;
}