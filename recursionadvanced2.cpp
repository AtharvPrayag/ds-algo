/*
//Q1)find the all permutations of ABC
#include<iostream>
#include<string>
using namespace std;
void permutations(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;                                     //base case.
        return ;
    }


for(int i=0;i<s.length();i++){
    char ch=s[i];
    string ros=s.substr(0,i)+s.substr(i+1);
permutations(ros,ans +ch);                                 //induction hypothesis.

}
}
int main(){
permutations("ABC","");

    return 0;
}
*/




/*
//count the number of  paths from i=0 to 5.
#include<iostream>
#include<string>
using namespace std;
int countpaths(int st,int end){

if(st==end){
    return 1;
}
if(st>end){                   //base conditions .
    return 0;
}
int count=0;
for(int i=1;i<=6;i++){
count=count + countpaths(st+i,end);            //induction hypothesis.
}
return count;

}
int main(){


cout<< countpaths(0,3);



    return 0;
}
*/



//count path of maze having n number
#include<iostream>
#include<string>
using namespace std;
int countpathsofmaze(int n,int i,int j){

if(i==(n-1) && j==(n-1)){
    return 1;
}

if(i>=n || j>=n){                        //these twos are base conditions.
    return 0;
}


return countpathsofmaze(n,i+1,j) + countpathsofmaze(n,i,j+1);


}
int main(){


cout<<countpathsofmaze(5,0,0);


    return 0;
}