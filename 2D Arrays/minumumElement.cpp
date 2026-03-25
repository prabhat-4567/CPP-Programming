#include<iostream>
using namespace std;
int main(){
    int mtrx[2][2];
    int minimun = INT8_MAX;
    cout<<"Enter Elements of Matrix: ";
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cin>>mtrx[i][j];
        }
    }
    cout<<"Matrix is: "<<endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<mtrx[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            minimun = min(minimun,mtrx[i][j]);
        }
    }cout<<"Minimum is: "<<minimun;
    
}