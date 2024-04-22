#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int max = -1, sum = 0, v;
    for (int i = 0; i < n; i++)
    {
        cin >> v;
        sum += v;
        if (v > max)
        {
            max = v;
        }
    }

    double result = sum * 100.0 / max / n;

    cout << result;

    return 0;
}
