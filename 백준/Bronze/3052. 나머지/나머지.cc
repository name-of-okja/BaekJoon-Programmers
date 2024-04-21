#include <iostream>

using namespace std;

int main()
{
    int arr[42] = {0};
    int v;
    for (int i = 0; i < 10; i++)
    {
        cin >> v;

        arr[v % 42] = 1;
    }

    int result = 0;
    for (int i = 0; i < 42; i++)
    {
        if (arr[i] == 1)
        {
            result++;
        }
    }

    cout << result;
    return 0;
}
