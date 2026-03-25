#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Kitne Number Aaye: ";
    cin>>marks;

    if(marks >=91 && marks <= 100){
        cout<<"Excellent";
    }
    else if(marks >= 81){
        cout<<"Very Good";
    }
    else if(marks >= 71){
        cout<<"Good";
    }
    else if(marks >= 61){
        cout<<"Average";
    }
    else if(marks >= 51){
        cout<<"Decent";
    }
    else if(marks >= 41){
        cout<<"Bad";
    }
    else{
        cout<<"Tu fail hai Lodu";
    }
}