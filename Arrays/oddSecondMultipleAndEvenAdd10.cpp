#include<iostream>
using namespace std;
int main(){
    int arr[] = {12, 15, 18, 22, 45, 50};
    int n = sizeof(arr)/4;
    for(int i=0; i<n; i++){
        if(i % 2 ==0)
        arr[i] *= 2;
        else
        arr[i] += 10;
        cout<<arr[i]<<" ";
    }
}