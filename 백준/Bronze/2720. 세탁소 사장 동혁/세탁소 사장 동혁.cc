#include <iostream>

using namespace std;

int main()
{
    int a = 0, b = 0, c = 0, d = 0;
    int count;
    cin >> count;

    int *money = new int[count];

    for (int i = 0; i < count; i++)
    {
        cin >> money[i];

        a = money[i] / 25;
        money[i] %= 25;

        b = money[i] / 10;
        money[i] %= 10;

        c = money[i] / 5;

        d = money[i] % 5;
        cout << a << " " << b << " " << c << " " << d << endl;
    }
    return 0;
}
