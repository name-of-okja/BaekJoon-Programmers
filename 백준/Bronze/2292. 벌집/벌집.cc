#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int answer = 0;
    int max = 1;
    int min = 1;

    while (++answer)
    {
        if (min <= n && max >= n)
        {
            break;
        }
        min = max + 1;
        max += answer * 6;
    }

    cout << answer;

    return 0;
}