#include<iostream>
#include<climits>
using namespace std;
int main(){
int ans=0;
int maxlen=INT_MIN;
char sentance[200];
cin>>sentance;
for(int i=0;i<200;i++){
    while(sentance[i]=='isspace'){
        int ans=i;
        maxlen=max(maxlen,ans);
        ans=i-ans;
    }
}
cout<<maxlen;

    return 0;
}