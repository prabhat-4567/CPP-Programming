#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"First Number: ";
    cin>>a;
    cout<<"Second Number: ";
    cin>>b;
    cout<<"Third Number: ";
    cin>>c;

    if(a > b){
        if(a > c){
            cout<<a<<" Sabse bada hai";     //if ke andar if
        }
        else{
            cout<<c<<" Sabse bada hai";
        }
    }
    else{
        if(b > a){
            cout<<b<<" sabse bada hai";
        }
        else{
            cout<<c<<" sabse bada hai";
        }
    }
}

/*if the age of ram, shyam, and ajay are input through
the keyboard, write a program to determine the youngest
of the three*/