#include<iostream>
using namespace std;
int factorial(int x){
    if(x==0 || x == 1) return 1;
    return x * factorial(x-1);
}
int main(){
    int a;
    cout<<"Enter N: ";
    cin>>a;
    factorial(a);
    cout<<factorial(a);
}