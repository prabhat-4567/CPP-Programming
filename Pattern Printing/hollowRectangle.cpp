#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"rows kitni karu: ";
    cin>>n;
    cout<<"coln kitne karu: ";
    cin>>m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(i == 1 || i == n || j == 1 || j == m )
                cout<<"* ";
            else cout<<"  ";    
        }
        cout<<endl;
    }
}