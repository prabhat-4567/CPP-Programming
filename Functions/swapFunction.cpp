#include<iostream>
using namespace std;
//yaha par & isko lagane se main function
//ka poora box aata hai function mai
//agar nahi lagaya to sirf value aayegi
int swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int a,b;
    cout<<"Enter two Numbers: "<<endl;
    cin>>a>>b;
    cout<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
}