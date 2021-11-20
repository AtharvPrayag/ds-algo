 /* //pointer are the variable which stores the adress of another variable.
#include<iostream>
using namespace std;
int main(){
int a=20;
int*ptr=&a;  //& is used to acess the adress of any variable here we have made an pointer which stores the adress of a.
cout<<ptr<<endl;
cout<<&a<<endl;      //these both will print the adress of a.

cout<<*ptr<<endl; //this * will gives us the value at adress
*ptr=90;
cout<<a<<endl;    //we can chage the actual value of variable using pointer.



    return 0;
}*/



/* //array to pointer 
#include<iostream>
using namespace std;
int main(){
int arr[5]={2,44,88,7,99};
cout<<arr<<endl;
cout<<arr+1<<endl;
cout<<arr+2<<endl;        
cout<<arr+3<<endl;     //all of these will give adrees of each corresponding element at that index.
//value at adress using pointers

for(int i=0;i<=4;i++){
    cout<<*(arr+i)<<endl;
}
    return 0;
}*/


/* //pointers to pointers
#include<iostream>
using namespace std;
int main(){

int a=80;
int* ptra=&a;
int** ptrab=&ptra;
cout<<ptrab<<endl;
cout<<&ptra<<endl;
cout<<ptra<<endl;
cout<<&a<<endl;

cout<<"the values"<<endl;
cout<<*ptrab<<endl;
cout<<**ptrab<<endl;
cout<<*ptra<<endl;
cout<<a<<endl; 
    return 0;
}  */




//swap array using pointers
//call by reference
#include<iostream>
using namespace std;
int main(){

int arr[6]={1,2,3,4,5,6};
for(int i=0;i<6/2;i++){
    int temp=arr[i];
    arr[i]=arr[5-i];
    arr[5-i]=temp;
}
for(int i=0;i<5;i++){
    cout<<arr[i]<<",";
}

cout<<arr[5];

    return 0;
}