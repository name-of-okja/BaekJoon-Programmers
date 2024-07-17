#include <iostream>

using namespace std;

int main()
{
    int A, B, V;
    cin >> A >> B >> V;

    int prevNight = (V - A) / (A - B);
    int Night = prevNight;
    int Height = Night * (A - B);
    while (++Night)
    {
        if (V <= Height + A)
        {
            break;
        }
        Height += (A - B);
    }

    cout << Night;

    return 0;
}
