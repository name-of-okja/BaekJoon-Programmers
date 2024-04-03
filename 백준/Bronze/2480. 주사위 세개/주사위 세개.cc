#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b && b == c)
    {
        cout << (10000 + (1000 * a)) << endl;
    }
    else if (a == b || b == c || a == c)
    {
        int same = (a == b || a == c) ? a : b;
        cout << (1000 + (same * 100)) << endl;
    }
    else
    {
        int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
        cout << (100 * max) << endl;
    }
    return 0;
}
