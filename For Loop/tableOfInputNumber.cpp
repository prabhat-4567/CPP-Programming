#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Bata kiski table likh du: ";
    cin >> x;

    for (int i = x; i <= x * 10; i += x)
    {
        cout << i << endl;
    }
}