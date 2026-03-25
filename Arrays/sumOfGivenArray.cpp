#include<iostream>
using namespace std;
int main(){
    int num[] = {12, 8, 20, 30, 25, 5};
    int sum = 0;
    for(int i = 0; i < 6; i++){
        sum += num[i];
    }
    cout<<"Sum is: "<<sum;
}