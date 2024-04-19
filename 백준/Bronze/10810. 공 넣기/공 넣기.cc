#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int *arr = new int[n];

    int i, j, k;
    while (m--)
    {
        cin >> i >> j >> k;
        for (int pos = i - 1; pos < j; pos++)
        {
            arr[pos] = k;
        }
    }

    for (int pos = 0; pos < n; pos++)
    {
        cout << arr[pos] << " ";
    }

    return 0;
}
