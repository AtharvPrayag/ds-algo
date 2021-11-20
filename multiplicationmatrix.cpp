//we to multiply matrixgiven two matrix
//to multiply column of first matrix equals to rows of second matrix
#include<iostream>
using namespace std;
int main(){
    cout<<"enter the diamensons;";
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int m1[n1][n2];
    int m2[n2][n3];
    cout<<"enter the first matrix"<<endl;
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            cin>>m1[i][j];
        }
    }
cout<<"enter the second matrix"<<endl;
for(int i=0;i<n2;i++){
    for(int j=0;j<n3;j++){
        cin>>m2[i][j];
    }
}


int ans[n1][n3];
for(int i=0;i<n1;i++){
    for(int j=0;j<n3;j++){
        ans[i][j]=0;
    }
}


//to multiplication of matrix

for(int i=0;i<n1;i++){
    for(int j=0;j<n3;j++){
        for(int k=0;k<n2;k++){
            ans[i][j]+=m1[i][k]*m2[k][j];
        }
    }
}

cout<<"your resultant matrix is:\n";
for(int i=0;i<n1;i++){
    for(int j=0;j<n3;j++){
        cout<<ans[i][j]<<" ";
    }cout<<endl;
}
    return 0;
}