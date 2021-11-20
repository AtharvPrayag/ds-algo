/*#include<iostream>
#include<vector>

using namespace std;
int main(){
//vectors are dynamic array we can add and remove elements from vector whenever we want.
vector<int>v;
v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);
v.pop_back();
for(int i=0;i<v.size();i++){
    cout<<v[i]<<",";
}cout<<endl;


vector<int>v1;
v1.push_back(12);
v1.push_back(11);

v1.push_back(13);
for(int i=0;i<v1.size();i++){
    cout<<v1[i]<<",";
}cout<<endl;
// swap(v,v1);
// for(int i=0;i<v1.size();i++){
//     cout<<v1[i]<<",";
// }cout<<endl;


// sort(v1.begin(),v1.end());

// for(int i=0;i<v1.size();i++){
//     cout<<v1[i]<<",";
// }cout<<endl;


pair<int, int>p1,p2,p3,p4;
p1.first(1);
p1.second(1000);

p2.first(2);
p2.second(2000);
p3.first(3);
p3.second(3000);






    return 0;
}
*/
//problem on pair 
//we have to place the index of an array acoording to its correct position on the position on which it were present before.
#include<bits/stdc++.h>
using namespace std;
bool mycompare(pair<int,int>p1, pair<int,int>p2){
    return p1.first<p2.first;
}
int main(){

int arr[]={14,3,44,66,78,9};  //we want output array ={2,0,3,4,5,1}.
vector < pair < int,int > > v;

for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
    v.push_back(make_pair(arr[i],i));      //here we have pushed the pair of arr[i]and i in  vector.
}

sort(v.begin(),v.end(),mycompare);

for(int i=0;i<v.size();i++){
    arr[v[i].second]=i;
}


for(int i=0;i<v.size();i++){
    cout<<arr[i]<<",";
}


    return 0;
}


