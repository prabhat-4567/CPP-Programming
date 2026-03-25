#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Triangle ki Rows ka Number Bata: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if(j == 1 || i == n || j == i) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}