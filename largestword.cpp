//we have to get input from user a sentance and find the length of largest word and print that word.
#include<iostream>
#include<climits>
using namespace std;
int main(){
//sentace input:-
char arr[100];
int n;
cin>>n;
cin.ignore();
cin.getline(arr,n);
cin.ignore();

int i=0;
int currentlen=0;
int maxlen=INT_MIN;
while(i<n){
    if(arr[i]==' ' || arr[i]=='\0'){
        maxlen=max(maxlen,currentlen);
    }
    else{ 
        currentlen++;
    }

    if(arr[i]=='\0'){
        break;
    }
}

cout<<maxlen<<endl;





    return 0;
} 
