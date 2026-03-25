#include<iostream>
using namespace std;
int main(){
    int size = 5;
    int array[size] = {1,2,3,4,5};
    for (int i = 0; i < 5; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    //print reverse order
    cout<<"Reverse Order: "<<endl;
    for (int i = 4; i >= 0; i--){
        cout<<array[i]<<" ";
    }
}