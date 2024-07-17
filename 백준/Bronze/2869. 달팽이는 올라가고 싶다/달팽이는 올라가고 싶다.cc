#include <iostream>

using namespace std;

int main()
{
    int A, B, V;
    cin >> A >> B >> V;

    int prevNight = (V - A) / (A - B);
    int Night = prevNight;

    if ((V - A) % (A - B) == 0)
    {
        Night += 1;
    }
    else
    {
        Night += 2;
    }

    cout << Night;

    return 0;
}
