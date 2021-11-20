//we have given a numberical  string of numbers we have to form the the largest number from the string:
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
string str="65154846013244432123135";
//to sort the numberical string
sort(str.begin(),str.end(),greater<int>());
cout<<str;





    return 0;
}