#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string name = "Kartik";
    cout<<"Original: "<<endl<<name<<endl;
    int n = name.length();
    reverse(name.begin(), name.begin()+n/2);
    cout<<"After Reverse: "<<endl<<name<<endl;
    
}