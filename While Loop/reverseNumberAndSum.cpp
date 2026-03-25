#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int emptyBox = n;
    int reverse = 0;
    int lastDigit;

    while (n != 0)
    {
        lastDigit = n % 10;
        reverse *= 10;
        reverse += lastDigit;
        n /= 10;
    }
    int sum;
    cout << "Reverse Number: " << reverse << endl;
    sum = reverse + emptyBox;
    cout << "Sum: " << sum;
}