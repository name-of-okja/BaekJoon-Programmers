#include <iostream>

using namespace std;

int main()
{
    int arr[31];

    for (int i = 1; i <= 30; i++)
    {
        arr[i] = 1;
    }

    int v;
    for (int i = 0; i < 30; i++)
    {
        cin >> v;
        arr[v] = 0;
    }

    for (int i = 1; i <= 30; i++)
    {
        if (arr[i])
        {
            cout << i << " ";
        }
    }
    return 0;
}
