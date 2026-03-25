#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name = "prabhat";
    cout << "Original String: " << endl;
    cout << name << "\n";

    // push back se ham string ke aange kuch bhi edit kar sakte hai
    name.push_back('a');
    cout << "After Push Back function: " << endl;
    cout << name << endl;

    // pop back se ham string ke last word ko hata sakte hai
    name.pop_back();
    cout << "After Pop Back function: " << endl;
    cout << name << endl;

    // append se ham string mai koi bhi sentence add kar sakte hai
    name.append(" jha is a programmer.");
    cout << "After using append function: " << endl;
    cout << name << endl;

    // clear se ham poori string ko clear kar sakte hai
    name.clear();
    cout<<"After using Clear Function: "<<endl;
    cout<<name<<endl;
    cout<<"nothing above coz clear fn erase the string.";
}