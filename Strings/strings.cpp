#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    cout<<"Enter Name: ";
    // cin>>name;                  //ye space ke baad code terminate kar deta hai
    getline(cin,name);       //ye code ko terminate nahi karta hai and space bhi leta hai
    cout<<"Your name is: "<<name<<endl;
} 