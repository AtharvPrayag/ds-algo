/* //there are two methodes to impliment stack using queues.
//methode 1) making push function costly.
#include<bits/stdc++.h>
using namespace std;
class Stack{
queue<int>q1;
queue<int>q2;
int N;

public:
Stack(){
	N=0;
}

void push(int val){
	N++;
	q2.push(val);
	while(!q1.empty()){
		q2.push(q1.front());
		q1.pop();
	}
	queue<int>temp;
	temp=q1;
	q1=q2;
	q2=temp;
}


void pop(){
	if(q1.empty() && q2.empty()){
		cout<<"no element to pop."<<endl;
	}
	q1.pop();
	N--;
}

int top(){
	return q1.front();

}
int size(){
	return N;
}


};

int main(){

Stack st;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);


cout<<st.top()<<endl;;
st.pop();

cout<<st.top()<<endl;
st.pop();

cout<<st.top()<<endl;;
st.pop();


cout<<st.top()<<endl;
st.pop();


cout<<st.size();


	return 0;
}

*/


//methode 2) making pop function costly.
//showing wrong answer.
#include<bits/stdc++.h>
using namespace std;
class Stack{
	int N;
	queue<int>q1;
	queue<int>q2;


	public:
//    Stack(){
// 	   N=0;
//    }

   void pop(){
	   if(q1.empty()){
		   cout<<"no element to pop"<<endl;
	   }
	   while(q1.size()!=1){
		   q2.push(q1.front());
		   q1.pop();
	   }
	   q1.pop();
	  // N--;
	   queue<int>temp;
	   temp=q1;
	   q1=q2;
	   q2=temp;
	   
   }


   void push(int val){
	  
	   q1.push(val);
	   // N++;
	   
   }

   int top(){
	   if(q1.empty()){
		   return -1;
	   }
	   while(!q1.size()==1){
		   q2.push(q1.front());
		   q1.pop();
	   }
	   int ans=q1.front();
	   q2.push(ans);
	   

	   queue<int>temp;
	   temp=q1;
	   q1=q2;
	   q2=temp;

	   return ans;
   }
//    int size(){
// 	   return N;
//    }

};
int main(){
Stack st;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);

st.pop();
cout<<st.top()<<endl;
// st.pop();
// cout<<st.top()<<endl;
// st.pop();

// cout<<st.top()<<endl;
// st.pop();

// cout<<st.top()<<endl;
// st.pop();

// cout<<st.top()<<endl;
// st.pop();






	return 0;
}