#include<iostream>
using namespace std;
void print1toN(int n, int x){
    if(n>x) return;
    cout<<n<<" ";
    print1toN(n+1,x);
}
int main(){
    int x;
    cout<<"Enter N: ";
    cin>>x;
    print1toN(1,x);
}