#include<iostream>
using namespace std;
bool cheack (int arr[],int n){
    if(n==1){
        return true;                //base condition
    }
    bool previousarray= cheack(arr+1,n-1);
    int i=0;
   if(arr[i]<arr[i+1] && previousarray){
       return true;}
   
  
   return false;

}
int main(){

int arr[5]={16,19,97,105,200};
cout<<cheack(arr,5);

    return 0;
}