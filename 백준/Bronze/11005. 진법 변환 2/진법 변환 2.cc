#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;

    string answer;
    while (n != 0)
    {
        int rest = n % d;
        if (rest < 10)
        {
            answer += '0' + rest;
        }
        else
        {
            answer += (rest - 10) + 'A';
        }

        n /= d;
    }

    reverse(answer.begin(), answer.end());
    cout << answer;

    return 0;
}
