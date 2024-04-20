#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int *arr = new int[n + 1];
    for (int pos = 1; pos <= n; pos++)
    {
        arr[pos] = pos;
    }

    int i, j, t;
    while (m--)
    {
        cin >> i >> j;
        t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
    }

    for (int pos = 1; pos <= n; pos++)
    {
        cout << arr[pos] << " ";
    }

    return 0;
}
