#include<iostream>
using namespace std;
int main(){
    int arr[2][3];
    for(int j = 0; j < 3; j++){     //rows
        for(int i = 0; i < 2; i++){ //columns
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int j = 0; j < 3; j++){
        for(int i = 0; i < 2; i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    //transpose of a matrix
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}