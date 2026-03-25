#include<iostream>
using namespace std;
int main(){
    int matrix[2][2][2];
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            for(int k = 0; k < 2; k++){
                    cin>>matrix[i][j][k];
            }
        }
    }
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            for(int k = 0; k < 2; k++){
                cout<<matrix[i][j][k]<<" ";
            }
        }
        cout<<endl;
    }

}