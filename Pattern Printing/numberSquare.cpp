#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int i=1; i<=n; i++){        //rows
        for(int j=1; j<=n; j++){    //column
            cout<<j<<" ";
        }
        cout<<endl;
    }
}