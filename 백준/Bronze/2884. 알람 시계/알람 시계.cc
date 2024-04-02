#include <iostream>

using namespace std;

int main()
{
    int h, m;
    cin >> h >> m;
    if (m >= 45)
    {
        cout << h << " " << m - 45 << endl;
    }
    else
    {
        int d = (m - 45) * -1;
        cout << (h != 0 ? h - 1 : 23) << " " << 60 - d << endl;
    }

    return 0;
}
