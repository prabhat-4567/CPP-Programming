#include<iostream>
using namespace std;
int main(){
    int marks[5];
    cout<<"Five Subjects Marks: ";
    for(int i = 0; i<= 4; i++){
        cin>>marks[i];
    }
    for(int i = 0; i<= 4; i++){
        cout<<marks[i]<<" ";
    }
    cout<<endl;
    //change the element of array
    marks[1]= 90;
    for(int i = 0; i<= 4; i++){
        cout<<marks[i]<<" ";
    }
    
}