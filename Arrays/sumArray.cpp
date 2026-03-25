#include<iostream>
using namespace std;
int main(){
    int number[] = {23, 45, 67, 12, 32, 99, 22};
    int random = sizeof(number)/4;
    int sum = 0;
    for(int i = 0; i<random; i++){
        sum += number[i];
    }
    cout<<"Sum is: "<<sum;
}