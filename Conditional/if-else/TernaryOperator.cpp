#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter Your Number: ";
    cin>>x;

    //ternary operator syntax
    //(condition) ? if true : if false

    (x % 2 == 0) ? cout<<"Even" : cout<<"Odd";

}