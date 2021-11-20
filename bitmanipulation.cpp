#include<iostream>
using namespace std;


//get bit at given position
int getbit(int num,int pos){
return(num & (1<<pos)!=0);
}


//set a bit at perticular position means seetin 1 and unset means setting 0;
int setbit(int n,int i){
return( (1<<i) | n);
}


//clearbit means getting zero at given positon .
int clearbit(int n,int i){
    int mask= ~(1<<i);
    return( mask & n);
}

//upadtebit we can udate 1 or zero at wanted position
int updatebit(int n,int i,int num){
    int mask= ~(1<<i);
    n= mask & n;
    return( n | (num<<i));

}


int main(){

int i;
cin>>i;
int n=5;
int num;
cin>>num;
//cout<<getbit(n,i)<<endl;
//cout<<setbit(5,i)<<endl;
//cout<<clearbit(5,i);
cout<<updatebit(5,i,num);
    return 0;
}