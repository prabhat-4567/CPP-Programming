#include<iostream>
using namespace std;
int main(){
    string input;
    cout<<"enter string: ";
    getline(cin,input);
    int n = input.size();
    for(int i = 0; i<input.size(); i++){
        if(i%2==0){
            input[i] = 'a';
        }
        cout<<input[i];
    }
}