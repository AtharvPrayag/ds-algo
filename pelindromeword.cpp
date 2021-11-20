//we have to find the given word is pelindrome or not,
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
char word[n+1];
cin>>word;
bool cheack=false;
for(int i=0;i<n;i++){
    if(word[i]==word[n-1-i]){
        cheack=true;
    }
    else{
        cheack=false;
        break;
    }
}


if(cheack){
    cout<<"the word is pelindrome";
}
else{
    cout<<" the word is not pelindrome";
}



    return 0;
}
