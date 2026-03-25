#include<iostream>
using namespace std;
void happy(){
    cout<<"I am Happy"<<endl;
    happy();
}
int main(){
    happy();
}