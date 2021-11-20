/*
//Q.1) we have reverse the string
#include<iostream>
#include<string>

using namespace std;
void reverse(string s){
if(s.length()==0){
    return;             //base condition.
}
char ch=s[0];
reverse(s.substr(1));    //inducton hypothesis.
cout<<ch;                //this is induction step.

}
int main(){

// input is binod print donid using recursion.
reverse("binod");

return 0;
}
*/




/*
// Q.2) move all x in string to the right.
//input==xxaasdfgxxxyxhyxxhg.
#include<iostream>
#include<string>
using namespace std;
string moveallx(string s){
    if(s.length()==0){
        return "";          //base case.
    }

   char ch=s[0];
   string ans=moveallx(s.substr(1));     //induction hypothesis.

  if( ch=='x'){
      return ans + ch;
  }

 else{
     return ch+ans;
 }
}
int main(){

cout<<moveallx("xasdxxarxhg");

    return 0;
}
*/

/*
//Q.3) remove all duplicates from string.
//we have delete the character occuring more than once in give string.
#include<iostream>
#include<string>
using namespace std;
string removedups(string s){
    if(s.length()==0){
        return "";         //base condition.
    }

   char ch=s[0];
   string ans=removedups(s.substr(1));    //induction hypothesis.

  if(ch==ans[0]){
      return ans;
  }

  else{                                  //induction steps.
      return ch + ans;
  }
}
int main(){

cout<<removedups("aaabbbbcccdeeffff");



    return 0;
}
*/


/*
//Q.4) replace pi==3.14 in a string
//"piabcpidefpiuvw"==3.14abc3.14def3.14uvw  we want this output.
#include<iostream>
#include<string>
using namespace std;

string replacepi(string s){
    if(s.length()==0){
        return "";        //base condition.

    }

char ch=s[0];
string ans=replacepi(s.substr(1));     //induction hypothesis.

if(ch=='p' && ans[0]=='i'){
    return "3.14" + ans.substr(1); }

else{                                     //induction step.
    return ch+ans;
}
}

int main(){

cout<<replacepi("piabcpidefpixyz");
    return 0;
}
*/


/*
//** Q.5) print all subsequences in given string.
//   print substrings of ABC.
#include<iostream>
#include<string>
using namespace std;
void substring(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return ;               //base condition. 
    }
    char ch=s[0];
    substring(s.substr(1),ans);
    substring(s.substr(1),ans+ch);   //induction hypothesis.   
}
int main(){

substring("ABC","");
    return 0;
}
*/



/*
//Q.6) print subsets of string with their ascii value.
#include<iostream>
#include<string>
using namespace std;
void subsetswithascii(string s,string ans){
    if(s.length()==0){
      cout<<ans<<endl;
      return;                               //base condition.
    }
    char ch=s[0];
    int ascii=s[0];
    subsetswithascii(s.substr(1),ans);
    subsetswithascii(s.substr(1),ans+ch);
    subsetswithascii(s.substr(1),ans+to_string(ascii));
}

int main(){
subsetswithascii("ABC","");
    return 0;
}
*/


/*
//***Q.7)tower of hannoi
#include<iostream>
#include<string>
using namespace std;
void towerofhanoi(int n,char source,char destination,char helper ){
    if(n==0){
        return;      //base condition.
    
    }

   towerofhanoi((n-1),source,helper,destination);       //induction hypothesis
   cout<<" move "<<n<<"th disc from "<<source<<" to "<<destination<<endl;  //induction steap
   towerofhanoi((n-1),helper,destination,source);       //induction hypothesis
}
int main(){
    
    towerofhanoi(5,'a','c','b');
    return 0;
}
*/



//Q.8)** keypad problem.
#include<iostream>
#include<string>
using namespace std;
string keypadarr[]={"","","abc","def","ghi","jkl","lmn","opq","rst","uvw","xyz"}   //we made a string array.
void keypad(string s,string ans){
    if(s.lenght()==0){
        cout<<ans<<endl;            //base condition.
        return;
    }


char ch=s[0];
string code=keypadarr[ch-'0']      //ch-'0' gives us integer i.e aschii value difference.
string ros=s.substr(1);
for(int i=0;i<code.length(),i++){
  return   keypad(ros,ans + code[i]);
}


}
int main(){




    return 0;
}
