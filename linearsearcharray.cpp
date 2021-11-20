//we have to search perticurl elment in array and if present we have to print its position and if not print -1
#include<iostream>
using namespace std;
int linearsearch(int n,int arr[],int key){

for(int i=0;i<n;i++){
if(arr[i]==key){
    return i;
}}
return -1;

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){

        cin>>arr[i];
    }
    int key;
    cin>>key;
   cout<< linearsearch(n,arr,key);

    return 0;
}


//here time complexity is n we can lesser the time complexity using binary search