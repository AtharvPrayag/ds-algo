//uppercase and lowercase conversion
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){

string str="hilfijdsnkoiacdjl";
//cout<<'a'-'A';
//into uppercase
for(int i=0;i<str.length();i++){
    if(str[i]>='a' && str[i]<='z'){
        str[i]=str[i]-32;
    }
}

cout<<str<<endl;

//into lower case:
for(int i=0;i<str.length();i++){
    if(str[i]>='A' && str[i]<='Z'){
        str[i]=str[i]+32;
    }
}
cout<<str<<endl;


transform(str.begin(),str.end(),str.begin(), ::toupper);
cout<<str<<endl;
transform(str.begin(),str.end(),str.begin(), ::tolower);
cout<<str<<endl;


    return 0;
}


