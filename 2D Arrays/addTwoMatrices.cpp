#include<iostream>
using namespace std;
int main(){
    int firstMtrx[2][2];
    int secondMtrx[2][2];
    cout<<"Enter Element of First Matrix: ";
    cout<<endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cin>>firstMtrx[i][j];
        }
    }
    cout<<endl;
    cout<<"Enter Element of Second Matrix: ";
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cin>>secondMtrx[i][j];
        }
    }
    cout<<endl;
    cout<<"Sum of Two Matrix: ";
    cout<<endl;
    int sum;
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            sum = firstMtrx[i][j] + secondMtrx[i][j];
            cout<<sum<<" ";
        }
        cout<<endl;
    }
}
    