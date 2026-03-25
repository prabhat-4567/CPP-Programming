#include<iostream>
using namespace std;
int factorial(int x){
    int fact = 1;
    for(int i=1; i<=x; i++){
        fact *= i;
        
    }
    return fact;
}
int main(){
    int n;
    cout<<"Enter Value of N: ";
    cin>>n;
    int r;
    cout<<"Enter Value of R: ";
    cin>>r;
    int a = factorial(n);
    int b = factorial(r);
    int c = factorial(n-r);
    cout<<a/(b*c);
}