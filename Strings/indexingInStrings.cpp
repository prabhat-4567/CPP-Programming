#include<iostream>
using namespace  std;
int main(){
    string name = "Prabhat Jha";
    //before change
    cout<<name<<"\n";
    name[0] = 'k';
    name[3] = 't';
    //after change
    cout<<name;
}