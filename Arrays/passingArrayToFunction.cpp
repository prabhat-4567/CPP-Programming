#include<iostream>
using namespace std;
void change (int age[]){
    age[0]= 56;
    age[1] = 63;
}
int main(){
    cout<<endl;
    int age[5] = { 34, 23, 13, 67, 32};
    cout<<"Before Change: "<<endl;
    for(int i = 0; i < 5; i++){
        cout<<age[i]<<" ";
    }
    cout<<"\n";
    cout<<"After Change: "<<endl;
    change(age);
    for(int i = 0; i < 5; i++){
        cout<<age[i]<<" ";
    }
    cout<<endl<<endl;
}