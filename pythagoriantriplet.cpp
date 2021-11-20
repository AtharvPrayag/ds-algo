#include<iostream>
using namespace std;
bool pythagorous(int x, int y, int z){int a,b,c;
    a=(x,max(y,z));
    if(a==x){
        b=y;
        c=z;
    }else if(a==y){
        b=x;
        c=z;
    }else{
        b=x;
        c=y;
    }

if(a*a == b*b + c*c ){
    return true;
}
return false;

}
int main(){
int x,y,z;
int a,b,c;
cin>>x>>y>>z;
 
if(pythagorous( x, y,z)==true){
    cout<<"it is pythagorian triplet";

}
else{
    cout<<"it is not pythagorian triplet";
}


    return 0;
}