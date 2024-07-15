#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int val = 2;
    while (n--)
    {
        val = (val * 2) - 1;
    }

    cout << val * val;

    return 0;
}
