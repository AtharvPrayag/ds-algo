//we have given a string we have to find reapeating element and its frequency
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

string str;
cin>>str;
int frn[26];
for(int i=0;i<26;i++){
    frn[i]=0;
}

for(int i=0;i<str.length();i++){
    frn[str[i]-'a']++;
}
int maxlen=0;
char ans='a';
for(int i=0;i<26;i++){
    if(frn[i]>maxlen){
        maxlen=frn[i];
        ans=i+'a';     //a+5 gives f also a=10 gives k hence i+a;
    }
}

cout<<maxlen<<endl<<ans;
    return 0;
}