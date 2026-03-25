#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "Prabhat";
    cout<<"Before Reverse: "<<"\n";
    cout<<s<<endl;
    // reverse fn use karne ke baad
    reverse(s.begin(),s.end());
    cout<<"After Reverse: "<<"\n";
    cout<<s<<endl;
}