/*
1)//we have to find unique number in an given array means only one number in an array is not present twice we have to that number
#include<iostream>
using namespace std;
int main(){

int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}

int xorsum=0;
for(int i=0;i<n;i++){
    xorsum=xorsum^arr[i];  //^ means xor operation by using xor operator numbers occurung double get vanished.
}
cout<<" your unique number is =\n"<<xorsum;

    return 0;
} 
*/
//we have to find two unique numbers in an given array.
#include<iostream>
using namespace std;
int setbits(int n,int pos){
    return ( n & (1<<pos)!=0);
}
void unique(int arr[],int n){
int xorsum=0;
for(int i=0;i<n;i++){
    xorsum=xorsum^arr[i];
}
int tempxor=xorsum;
int setbit=0;
int pos=0;
while(setbit!=1){
xorsum=xorsum & 1;
pos++;
xorsum=xorsum>>1;
}
int newxor=0;
for(int i=0;i<n;i++){
    if(setbits(arr[i],(pos-1))){
        newxor=newxor ^ arr[i];
    }
}
cout<<newxor<<endl;
cout<<(tempxor ^ newxor)<<endl;



}



int main(){
int arr[8]={1,2,3,1,2,3,5,6};   


unique(arr,8);


return 0;

}