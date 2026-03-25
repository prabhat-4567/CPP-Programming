#include<iostream>
using namespace std;
int main(){
    int matrix[2][2];
    int sum = 0;
    cout<<"Enter Elements of Matrix: ";
    for(int i = 0; i<2; i++){
        for(int j=0; j<2; j++){
            cin>>matrix[i][j];
        }
    }
    cout<<"Matrix: "<<endl;
    for(int i = 0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i = 0; i<2; i++){
        for(int j=0; j<2; j++){
            sum += matrix[i][j];
        }
    }
    cout<<"Sum of all Elements: "<<sum;

}