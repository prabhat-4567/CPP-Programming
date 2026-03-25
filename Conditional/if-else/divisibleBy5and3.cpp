#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Number Daal Bhai: ";
    cin>>x;
    // if(x % 5 == 0){
    //     cout<<"Ye 5 se Divisible Hai";
    // }
    // else if(x % 3 == 0){
    //     cout<<"Ye 3 se divisible hai";
    // }
    // else if(x % 5 == 0 && x % 3 == 0){
    //     cout<<"Ye to 5 and 3, dono se divisible hai";
    // }
    // else{
    //     cout<<"Dono mai kisi se divisible nahi hai";
    // }

    if(x % 5 == 0 and x % 3 == 0){
        cout<<"Divisible by 5 and 3";
    }
    else{
        cout<<"Kisi se divisible nahi hai";
    }
}