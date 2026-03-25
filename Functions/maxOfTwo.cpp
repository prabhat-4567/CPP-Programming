#include<iostream>
using namespace std;
int maximumOfTwo(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    int a,b;
    cout<<"Enter Two Numbers: ";
    cin>>a>>b;
    maximumOfTwo(a,b);
    cout<<maximumOfTwo(a,b)<<" is maximum";
}