#include<iostream>
using namespace std;
struct student
{
    int marks1;
    int marks2;
    float average;
};
int main(){
    student s;
    cout<<"Enter number in first: ";
    cin>>s.marks1;
    cout<<"Enter number in second: ";
    cin>>s.marks2;
    s.average = (s.marks1 + s.marks2) / 2.0;
    cout<<"Average: "<<s.average;
    return 0;
}
