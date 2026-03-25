#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sum = 0, lastDigit;
    while (n != 0)
    {
        lastDigit = n % 10;
        n /= 10;          // n = n / 10
        sum += lastDigit; // sum = sum + lastDigit
    }
    cout << sum;
}