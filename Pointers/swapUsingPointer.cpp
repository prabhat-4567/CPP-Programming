#include<iostream>
using namespace std;
void swap (int* x, int*y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int a = 34;
    int b = 55;
    cout<<a <<" "<<b<<endl;
    swap(&a, &b);
    cout<<a<<" " <<b;
}