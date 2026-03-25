#include<iostream>
using namespace std;
int main(){
    int mtrx[3][3];
    int maximun = INT8_MIN;
    cout<<"Enter Elements of the Martix: "<<endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin>>mtrx[i][j];
        }
    }
    cout<<endl;
    cout<<"Matrix is: "<<endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            maximun = max(maximun, mtrx[i][j]);
            cout<<mtrx[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Largest: "<<maximun;
}