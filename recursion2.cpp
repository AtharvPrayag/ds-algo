//advence recursion questions
/*
//print number in ascending order till n using recursion.
#include<iostream>
using namespace std;
void dec(int n){
    if(n==1){
        cout<<1<<endl;
        return ;
    }
    cout<<n<<endl;
    dec(n-1);
}
void asc(int n){
    if(n==1){
        cout<<"1"<<endl;
        return;
    }
    asc(n-1);
    cout<<n<<endl;
}

int main(){
int n;
cin>>n;
dec(n);
asc(n);
return 0;
}
*/


//cheack the array is sorted or not
/*#include<iostream>
using namespace std;
bool cheack(int arr[],int n){
    if(n==1){
        return true;   //base condition.
    }
    bool previousarray=cheack(arr+1,n-1);
    return (arr[0]<arr[1] && previousarray);
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

cout<<cheack(arr,n);



    return 0;
}*/

//first occurance
#include<iostream>
using namespace std;
int firstocc(int arr[],int n,int i,int key){
if(n==i){
    return -1;   //base condition to terminate recursion.
}
if(arr[i]==key){
    return i;
}
return firstocc(arr,n,i+1,key);
}


int lastocc(int arr[],int n,int i,int key){
if(n==i){
    return -1;
}
int lastnum=lastocc(arr,n,i+1,key);
if(lastnum!=-1){
    return lastnum;
}
if(arr[i]==key){
    return i;
}
return -1;
}

int main(){
int n;
int key;
int i=0;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cin>>key;
cout<<firstocc(arr,n,i,key)<<endl;
cout<<lastocc(arr,n,i,key)<<endl;
    return 0;
}