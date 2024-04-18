#include <iostream>

using namespace std;

int main()
{
    int max = 0, maxIndex = 0;
    int val;
    for (int i = 1; i <= 9; i++)
    {
        cin >> val;
        if (val > max)
        {
            max = val;
            maxIndex = i;
        }
    }

    cout << max << endl
         << maxIndex;
    return 0;
}
