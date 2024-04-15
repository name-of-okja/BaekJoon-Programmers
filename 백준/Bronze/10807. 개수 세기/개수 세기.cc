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

    int v;
    int result = 0;
    cin >> v;

    for (int i = 0; i < len; i++)
    {
        if (arr[i] == v)
        {
            result++;
        }
    }

    cout << result;
    return 0;
}
