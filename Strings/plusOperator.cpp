#include <iostream>
using namespace std;
int main()
{
    string student = "kallu";
    cout << student << " " << student.length() << endl;
    student = student + " loafer";
    cout << student << " " << student.length() << endl;
}