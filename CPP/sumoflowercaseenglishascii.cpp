#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    for (int x = 122; x > 97; x--)
    {
        sum += x;
    }
    cout << sum;
}