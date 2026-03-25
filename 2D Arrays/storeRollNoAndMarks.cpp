#include<iostream>
using namespace std;
int main(){
    int details[4][2] = {{4567, 100},{4569, 90},{4444, 67},{4533, 56}};
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 2; j++){
            cout<<details[i][j]<<" ";
        }
        cout<<endl;
    }
}