#include <iostream>

using namespace std;

void reverse(int *arr, int i, int j)
{
    while (i < j)
    {
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
        i++;
        j--;
    }
}

int main()
{
    int n, m;

    cin >> n >> m;

    int *arr = new int[n + 1];
    for (int i = 1; i <= n; i++)
    {
        arr[i] = i;
    }

    int i, j;
    while (m--)
    {
        cin >> i >> j;
        reverse(arr, i, j);
    }

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
