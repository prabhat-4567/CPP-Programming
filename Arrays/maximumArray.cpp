#include<iostream>
using namespace std;
int main(){
    int number[] = {12, 43, 76, 23, 87, 67};
    int store = sizeof(number)/4;
    int maximum = number[0];
    for(int i = 0; i<store; i++){
        if(number[i]> maximum)
        maximum = number[i];
     // maximum = max(maximum, number[i]);
    }
    cout<<maximum;
}