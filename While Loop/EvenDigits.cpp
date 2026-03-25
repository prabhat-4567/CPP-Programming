#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    int even = 0, lastDigit;
    while (n != 0)
    {
        lastDigit = n % 10;
        if (lastDigit % 2 == 0)
        {
            even += lastDigit;
        }
        n = n / 10;
    }
    cout << "Sum of Even Digits: " << even;
}