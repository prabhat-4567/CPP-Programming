#include <iostream>
using namespace std;
int main()
{
    string intro = "i am a student in iilm university in greater noida";
    int count = 0;
    for (int i = 0; i <= intro.length(); i++)
    {
        if (intro[i] == 'a' || intro[i] == 'e' || intro[i] == 'i' || intro[i] == 'o' || intro[i] == 'u')
        {
            count++;
        }
    }
    cout << count;
}