#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    int product = 1, lastDigit;
    while (n != 0)
    {
        lastDigit = n % 10;
        product *= lastDigit;
        n = n / 10;
    }
    cout << "Product of Digits: " << product;
}