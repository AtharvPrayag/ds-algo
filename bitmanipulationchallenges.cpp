/*
//we have to find the given number power of two or not.
#include<iostream>
using namespace std;
bool ispowerof2(int n){

if((n & (n-1))==0){
return true;
}
else{
    return false;
}


}
int main(){
int n;
cin>>n;
if(ispowerof2(n)){
    cout<<"it is power of two"<<endl;
}
else{
    cout<<"it is not power of two";
}

    return 0;
}
*/



 /*
 //cout the number of 1s present in given number 
#include<iostream>
using namespace std;
int ones(int n){
    int count=0;
    while(n!=0){
        n=(n &(n-1));
        count++;
    }
    return count;
}
int main(){

int n;
cin>>n;
cout<<ones(n);


    return 0;
}*/



//subsets using bit manipulation 
#include<iostream>
using namespace std;

void subset(int arr[],int n){

for(int i=0;i< (1<<n) ;i++){
    for(int j=0;j<n;j++){
       if(i & (1<<j)){
           cout<<arr[j]<<" ";
       }
    }cout<<endl;
}
}

int main(){

int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
    }

subset(arr,n);


    return 0;
}




