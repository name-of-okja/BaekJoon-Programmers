#include <iostream>

using namespace std;

int main()
{
    int x, y;
    int t;

    cin >> x >> y;

    t = y;

    for (int i = 0; i < 3; i++)
    {
        cout << x * (t % 10) << endl;
        t /= 10;
    }

    cout << x * y << endl;
    return 0;
}
