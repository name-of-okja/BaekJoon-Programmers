#include <iostream>

using namespace std;

int rev(int p)
{
    int r = 0;
    while (p)
    {
        r = r * 10;
        r += p % 10;

        p /= 10;
    }

    return r;
}
int main()
{
    int a, b;
    cin >> a >> b;

    a = rev(a);
    b = rev(b);

    cout << (a > b ? a : b);
    return 0;
}
