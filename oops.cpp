//object oriented programming in c++
#include<iostream>
using namespace std;
//class.
class student{
     public: 
    string name;  
              
    int age;                      //these are data embers of class.
    string gender;
    
student(string s,int a,string b){
    name=s;
    age=a,       //this is parameterised constructor.
    gender=b;
    cout<<"parameterosed constructor\n";
}

student(){
    cout<<"default constructor\n";   //this is dedault constructor.
}

student (student &a){
    name=a.name;                     //this is copy constructor.
    age=a.age;
    gender=a.gender;
    cout<<"copy consructor\n";
}
void printInfo(){
    
    cout<<"name= ";
    cout<<name<<endl;
    cout<<"age=";
    cout<<age<<endl;
    cout<<"gender= ";
    cout<<gender<<endl;
}
//operator overloading.
bool operator == (student &a){
    if( name==a.name && age==a.age && gender=a.gender){
        return true;
    }
    return false;
}
    
    
};

int main(){




// student array[2];
// for(int i=0;i<2;i++){
//     cout<<"name= ";                                     //we can make a array of object
//     string s;
//     cin>>s;
//     array[i].setname(s);
//     cout<<"age= ";
//     cin>>array[i].age;
//     cout<<"gender= ";
//     cin>>array[i].gender;
// }

// cout<<"output is ==== "<<endl;
// for(int i=0;i<2;i++){                               //this is how we can print the array of aobject.
//     array[i].printInfo();
// }

//constructor.
student a("atharv",20,"male");
//a.printInfo();
student b;
student c(a);
//c.printInfo();
if(c==a){
    cout<<"true";
}
else{
    cout<<"false";
}


    return 0;
}