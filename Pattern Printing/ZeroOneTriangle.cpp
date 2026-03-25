#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number of Rows: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if((i + j) % 2 == 0) cout<<"1 ";    //agar i+j even hua to 1
            else cout<<"0 ";                    //varna 0 print hoga
        }                       
        cout<<endl;
    }
}