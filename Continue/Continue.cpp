#include <iostream>
using namespace std;
int main(){
    for(int i=1; i<=20; i++){
        if( i == 2) continue;   //2 print nahi hoga
        if( i == 20) continue;  //20 print nahi hoga
        cout<<i<<" ";
    }
}