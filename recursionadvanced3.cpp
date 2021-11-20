/*
//tailing problem we have to count the number of ways to fix tiles.
#include<iostream>
using namespace std;
int tailing(int n){

if(n==1 ||n==0 ||n==2){
    return n;
}
 return tailing(n-1) + tailing(n-2);




}

int main(){

cout<<tailing(3);


    return 0;
}
*/




//friends matching we have to ways to match n friends.
#include<iostream>
using namespace std;
int friendsmatching (int n){
    if(n==0){
        return 0;                          //base condition.
    }
    if(n==1){
        return 1;
    }
    

return friendsmatching(n-1)+friendsmatching(n-2)*(n-1);




}
int main(){
cout<<friendsmatching(3);
    return 0;
}





//****0-1 knapsack problem   unable to understand.