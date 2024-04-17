#include <iostream>

using namespace std;

int main()
{
    int len;
    cin >> len;

    int *arr = new int[len];

    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }

    int min = arr[0], max = arr[0];
    for (int i = 1; i < len; i++)
    {
        int v;
        cin >> v;
        if (arr[i] > max)
        {
            max = arr[i];
        }
        else if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << min << " " << max;
    return 0;
}
