#include<iostream>
using namespace std;
int main(){
    int x = 1;
    int* p = &x;
    cout<<&p<<endl;
    cout<<&x<<endl;
    cout<<*p<<endl;
}