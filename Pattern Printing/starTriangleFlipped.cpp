#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Triangle ki rows bata: ";
    cin>>n;
    for(int i=1; i<=n; i++){            //rows 
        for(int j=1; j<=n-i; j++){      //spaces dekhega
            cout<<"  ";                 //j<=n-i reverse triangle ke liye use hota hai
        }
        for(int j=1; j<=i; j++){        //stars dekhega
            cout<<"* ";
        }
        cout<<endl;
    }
}