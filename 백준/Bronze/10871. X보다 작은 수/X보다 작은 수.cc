#include <iostream>

using namespace std;

int main()
{
    int n, v;
    cin >> n >> v;

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < v)
        {
            cout << arr[i] << ' ';
        }
    }

    return 0;
}
