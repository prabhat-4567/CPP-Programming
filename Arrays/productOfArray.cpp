#include<iostream>
using namespace std;
int main(){
    int product[] = {2, 4, 5, 10, 5};
    int number = 1;
    for(int i = 0; i<5; i++){
        number *= product[i];
    }
    cout<<"Product is: "<<number;
}