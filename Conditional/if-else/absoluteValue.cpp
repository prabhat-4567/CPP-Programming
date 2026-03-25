#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the Number: ";
    cin>>x;
    // if (x > 0){
    //     cout<<x;
    // }
    // else{
    //     cout<<-x;
    // }

    //iske sath ham aisa bhi likh sakte hai

    if (x < 0) x = -x;
    cout<<x;
}