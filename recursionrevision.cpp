//q.1)print numbers from 5 to 1
/*I #include<iostream>
using namespace std;
void recursive(int n){
    if(n==0){
        return ;
    }
cout<< n<<endl;
    recursive(n-1);
    
}
int main(){
    int n=5;
    recursive(n);
    return 0;
}
*/


//q.2)print numbers from 1 to 5.
/*#include<iostream>
using namespace std;
void recursion(int n){
    //base condition.
    if(n==0){
        return ;      
    }
    recursion(n-1);
    cout<<n<<endl;
}
int main(){
    int n=5;
    recursion(n);
    return 0;
}
*/

//q.3)print sum of n natural numbers.
/*#include<iostream>
using namespace std;
int sumofn(int n){
    //base case.
    if(n==0){
        return 0;
    }
     return (n+sumofn(n-1));
}
int main(){
int n;
cin>>n;

cout<<sumofn(n);

    return 0;
}
*/


//Q.4)factorial
/* #include<iostream>
using namespace std;
int factorial(int n){
    if( n==1 ||n==0){
        return 1;
    }
    int ans=n*factorial(n-1);
    return ans;
}
int main(){
int n;
cin>>n;
cout<<factorial(n);

    return 0;
}*/

//q.5) print the fibonacchi series till nth element.
/* #include<iostream>
using namespace std;
void fibonacchi(int a,int b,int n){
    if(n==0){
        return ;
    }
    int c=a+b;
    cout<<c<<",";
    fibonacchi(b,c,n-1);
    
}
int main(){
int n;
cin>>n;
int a=0;int b=1;
cout<<a<<","<<b<<",";
fibonacchi(a,b,n-2);
    return 0;
}
*/

//q.6)print the nth term of fibonacchi series.
/*#include<iostream>
using namespace std;
int fib(int n){
    if(n==0||n==1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}
int main(){

int n;
cin>>n;

cout<<fib(n);
    return 0;
}
*/

//Q.7)calcualte x^n;     //here stack height is n.
/*#include<iostream>
using namespace std;
int power(int x,int n){
    if(n==0){
        return 1;
    }
    if(x==0){
        return 0;
    }
    return x*power(x,n-1);
}
int main(){
int x;int n;
cin>>x>>n;
cout<<power(x,n);


    return 0;
}
*/


//q.8)calculate x^n where stack height is log n.
/*#include<iostream>
using namespace std;
int power(int x,int n){
    if(n==0){
        return 1;
    }
    if(x==0){
         return 0;
    }

if(n%2==0){
    return power(x,n/2)*power(x,n/2);

}
else{
    return power(x,n/2)*power(x,n/2)*x;
}

}
int main(){
int x,n;
cin>>x>>n;
cout<<power(x,n);
    return 0;
}
*/




//Q.9)tower of hannoi.
#include<iostream>
using namespace std;
void towerofhannoi(int n,char source,char destination ,char helper){
    if(n==0){
        return ;
        
    }
    towerofhannoi((n-1),source,helper,destination);
    cout<<" move "<< " disc from " << source <<" to " <<destination<<endl;
    towerofhannoi((n-1),helper,destination,source);

}

int main(){
char source='a';
char helper='b';
char destination='c';
int n=3;
towerofhannoi(3,source,destination,helper);

    return 0;
}



