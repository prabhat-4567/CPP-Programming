#include<iostream>
using namespace std;
int main(){
    int arr[] = {89, 34, 98, 44, 13, 2};
    int n = sizeof(arr)/4;
    int mx = INT8_MIN;
    for (int i = 0; i < n; i++){
        mx = max(mx,arr[i]);
    }
    int secondmx  = INT8_MIN;
    for (int i = 0; i < n; i++){
        if(arr[i]!=mx)
        secondmx = max(secondmx,arr[i]);
    }
    cout<<secondmx;
}
