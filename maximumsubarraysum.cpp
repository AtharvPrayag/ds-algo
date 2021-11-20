//method 1=having n cube time complexity means non efficient
/*#include<iostream>
#include<climits>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
int maxsum=INT_MIN;
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){int sum=0;
        for(int k=i;k<=j;k++){
             sum=sum+arr[k];
             maxsum=max(maxsum,sum);
        }
    }
}
cout<<maxsum<<endl;
    return 0;
}*/
    





//metode 2=cummulative sum having n square time complexity here we make another array which stores the sum upto that index and then we subtrat 
//that sum from all previous elements to cheack max
/*#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    int maxsum=INT_MIN;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

      int cumsum[n+1];
      cumsum[0]=0;
      int sum=0;
      for(int i=0;i<=n;i++){
            sum=sum+arr[i];
            cumsum[i+1]=sum;        //we made array which store the sum 
      }
            
        for(int i=0;i<n;i++){
            int sum2=0;
            maxsum=max(maxsum,sum2);
            for(int j=1;j<=n;j++){
                sum2=cumsum[j]-cumsum[i];
                maxsum=max(maxsum,sum2);
            }
        }


          cout<<maxsum<<endl;


    return 0;
}*/


  

//method 3===kedens algorithm to find maximum sum 
//here we find the currentsum and as soon as currentsum gets negative discard it;
#include<iostream>
#include<climits>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int maxsum=INT_MIN;
int currentsum=0;
for(int i=0;i<n;i++){
    currentsum=currentsum+arr[i];
    if(currentsum<0){
        currentsum=0;
    }
    maxsum=max(maxsum,currentsum);
}
cout<<maxsum<<endl;

    return 0;
}
