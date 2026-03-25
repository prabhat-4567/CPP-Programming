#include<iostream>
using namespace std;
int factorial(int x){
    int fact = 1;
    for(int i = 1; i<=x; i++){
        fact *= i;
    }
    return fact;
}
int combination(int n, int r){
    int a = factorial(n);
    int b = factorial(r);
    int c = factorial(n-r);
    return a/(b*c);
}
int main(){
    int number;
    cout<<"Enter N: ";
    cin>>number;
    for(int i = 0; i <= number; i++){
        
        for(int j =0; j<=number-i; j++){
            cout<<" ";
        }
        for(int j =0; j<=i; j++){
            cout<<combination(i,j)<<" ";
        }
        cout<<endl;
    }
}