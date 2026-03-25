#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter N: ";
    cin >> n;
    bool decision = true;

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            decision = false;
            break;
        }
    }
    if (n==1) cout << "Neither Prime Nor Composite";
    else if(decision==true) cout<<"Prime";
    else cout << "Composite";
}