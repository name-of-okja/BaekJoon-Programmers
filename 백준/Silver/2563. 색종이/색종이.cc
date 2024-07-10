#include <iostream>
#include <string>

using namespace std;

int main()
{
    int arr[100][100] = {
        0,
    };

    int n, x, y;
    int count = 0;

    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> x >> y;

        for (int j = y; j < y + 10; ++j)
        {
            for (int k = x; k < x + 10; ++k)
            {
                arr[j][k] = 1;
            }
        }
    }

    for (int i = 0; i < 100; ++i)
    {
        for (int j = 0; j < 100; ++j)
        {
            if (arr[i][j] == 1)
            {
                count++;
            }
        }
    }

    cout << count;
    return 0;
}
