#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;

    for(int i = 1; i <= n; i++){        //row
        for(int j = 1; j <= n + 1 - i; j++){    //column
            cout<<i<<" ";
        }
        cout<<endl;
    }
}