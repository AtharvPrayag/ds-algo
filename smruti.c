#include<stdio.h>
void arrayrev(int array[],int n){
    int temp;
    
    for(int i=0;i<=n/2;i++){
    temp=array[i];
    array[i]=array[(n-1)-i];
   array[(n-1)-i]=temp;
    }
    for(int i=0;i<=4;i++){
        printf("the %d elment of array after swap is %d\n",i,array[i]);
}}

    

int main(){

int n;
printf("enter the size of array\n");
scanf("%d",&n);
int arrays[n];
for(int i=0;i<=n-1;i++){

    scanf("%d",&arrays[i]);
}


 arrayrev(arrays,n);
 


    return 0;
}