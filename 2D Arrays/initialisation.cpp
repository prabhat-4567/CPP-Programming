#include<iostream>
using namespace std;
int main(){
    int arr[2][3] = {{12,23,34},{45,56,67}};
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}