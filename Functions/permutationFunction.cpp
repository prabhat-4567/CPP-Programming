#include<iostream>
using namespace std;
int factorial(int z){
    int fact = 1;
    for(int i = 1; i<=z; i++){
        fact *= i;
    }
    return fact;
}
int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int r;
    cout<<"Enter R: ";
    cin>>r;
    int a = factorial(n);
    int b = factorial(n-r);
    cout<<a/b;
}
